/**
 * To run in flask see :
 * https://github.com/RedFalsh/flask-serial/blob/master/README.md
 *
 * https://stackoverflow.com/questions/57558398/importing-python-script-that-contain-serial-initialization-into-flask-app
 */

/**
 Original, for reference
#define MA_PWM 5
#define MA_A 3
#define MA_B 4

#define MB_PWM 6
#define MB_A 7
#define MB_B 8
**/

#define MA_PWM 5
#define MA_A 4
#define MA_B 3

#define MB_PWM 6
#define MB_A 7
#define MB_B 8



#define DAC_MAXVALUE 255 // The Arduino Uno DAC is 8-bits 0..255

// Debugging switches and macros
#define DEBUG 1 // Switch debug output on and off by 1 or 0

/* Stop the robot if it hasn't received a movement command in this number of milliseconds */
#define AUTO_STOP_INTERVAL 10000
long lastMotorCommand = AUTO_STOP_INTERVAL;
// The autostop is copied from https://github.com/joshnewans/ros_arduino_bridge/blob/main/ROSArduinoBridge/ROSArduinoBridge.ino


#if DEBUG
#define PRINTS(s)   { Serial.print(F(s)); }
#define PRINT(s,v)  { Serial.print(F(s)); Serial.print(v); }
#define PRINTX(s,v) { Serial.print(F(s)); Serial.print(F("0x")); Serial.print(v, HEX); }
#else
#define PRINTS(s)
#define PRINT(s,v)
#define PRINTX(s,v)
#endif


char buffer [32];
int cnt = 0;

bool ready=false;
bool errorMsg=false;

/***
 * If you use the default values set   by the ArduinoDiecimila'sbootloader, these are your PWM frequencies: Arduino Pins 5 and 6: 1kHz
 * Arduino Pins 9, 10, 11, and 3: 500Hz
 */
void runMotor(int motorA, int motorB)
{
  PRINT("\nMotor A : ", motorA);
  PRINT("\nMotor B : ", motorB);
  
  if (motorA > 0){
    digitalWrite(MA_A, HIGH);
    digitalWrite(MA_B, LOW);
  }
  else{
    digitalWrite(MA_A, LOW);
    digitalWrite(MA_B, HIGH);
  }  
  analogWrite(MA_PWM,min(abs(motorA), DAC_MAXVALUE));
  if(motorA==0) {
    digitalWrite(MA_A, LOW);
    digitalWrite(MA_B, LOW);
  }


  if (motorB > 0){
    digitalWrite(MB_A, HIGH);
    digitalWrite(MB_B, LOW);
  }
  else{
    digitalWrite(MB_A, LOW);
    digitalWrite(MB_B, HIGH);
  }

  analogWrite(MB_PWM,min(abs(motorB), DAC_MAXVALUE));
  if(motorB==0) {
    digitalWrite(MB_A, LOW);
    digitalWrite(MB_B, LOW);
  }

}


void printError(void) {
  PRINT("\nOooops : ", buffer);
  runMotor(0, 0);
  errorMsg=false;
}

void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
     
  pinMode(MA_A,   OUTPUT);
  pinMode(MA_B,   OUTPUT);
  pinMode(MA_PWM, OUTPUT); // PWM
  pinMode(MB_PWM, OUTPUT); // PWM
  pinMode(MB_A,   OUTPUT);
  pinMode(MB_B,   OUTPUT);

  Serial.begin(115200);
  Serial.println("EidVgs serial motor controller v0.3");
  digitalWrite(LED_BUILTIN, HIGH);
}

void loop() {
 
  if (Serial.available() > 0) {
      char c = Serial.read();  //gets one byte from serial buffer
      buffer[cnt++] = c;

      if ((c == '\n') || (cnt == sizeof(buffer)-1))
      {
        buffer[cnt] = '\0';
        cnt = 0;
        ready = true;
      }
    }     
    
  if(ready) {
    int motorA, motorB;
    char endOfLine;

    if(sscanf(buffer, "%d,%d,%c", &motorA, &motorB, &endOfLine) == 3){

      if(endOfLine=='s') {
        runMotor(motorA, motorB);
        lastMotorCommand = millis();
      }
      else {
        errorMsg=true;
      }
    }
    else
      errorMsg=true;

    // Cleanup and get ready for new input string
    ready=false;  
  }

  if(errorMsg) {
    printError();
    digitalWrite(LED_BUILTIN, LOW);     //Sticky error LED, will never trun on again
  }


  // Check to see if we have exceeded the auto-stop interval
  if ((millis() - lastMotorCommand) > AUTO_STOP_INTERVAL) {;
    runMotor(0, 0);
  }

}


//https://forum.arduino.cc/t/read-line-from-serial/98251/5
//https://stackoverflow.com/questions/11068450/arduino-c-language-parsing-string-with-delimiter-input-through-serial-interfa
//https://www.electronicwings.com/users/sanketmallawat91/projects/215/frequency-changing-of-pwm-pins-of-arduino-uno#:~:text=The%20frequency%20of%20the%20PWM%20signal%20on%20most%20pins%20is,also%20run%20at%20980%20Hz.
//https://arduinoplusplus.wordpress.com/2017/05/01/simple-debugging-for-arduino-sketches/
