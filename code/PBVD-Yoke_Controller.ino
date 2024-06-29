/*


 */

#include <AccelStepper.h>

// Define stepper motor pins
#define X_STEP_PIN 2
#define X_DIR_PIN 5
#define Y_STEP_PIN 3
#define Y_DIR_PIN 6

// Define laser control pin
#define LASER_PIN 9

// Create stepper motor objects
AccelStepper stepperX(AccelStepper::DRIVER, X_STEP_PIN, X_DIR_PIN);
AccelStepper stepperY(AccelStepper::DRIVER, Y_STEP_PIN, Y_DIR_PIN);

// Serial input buffer
String inputString = "";
bool stringComplete = false;

// Function to parse incoming serial data
void parseData(String data) {
  // Split data into components (assuming format: "X100Y200L1")
  int xIndex = data.indexOf('X');
  int yIndex = data.indexOf('Y');
  int lIndex = data.indexOf('L');

  int xCoord = data.substring(xIndex + 1, yIndex).toInt();
  int yCoord = data.substring(yIndex + 1, lIndex).toInt();
  int laserState = data.substring(lIndex + 1).toInt();

  // Move steppers to specified coordinates
  stepperX.moveTo(xCoord);
  stepperY.moveTo(yCoord);

  // Activate or deactivate laser
  digitalWrite(LASER_PIN, laserState);

  // Run the steppers until they reach the target position
  while (stepperX.distanceToGo() != 0 || stepperY.distanceToGo() != 0) {
    stepperX.run();
    stepperY.run();
  }
}

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  inputString.reserve(200);

  // Initialize laser control pin
  pinMode(LASER_PIN, OUTPUT);
  digitalWrite(LASER_PIN, LOW);

  // Initialize steppers
  stepperX.setMaxSpeed(1000);
  stepperX.setAcceleration(500);
  stepperY.setMaxSpeed(1000);
  stepperY.setAcceleration(500);
}

void loop() {
  // Check if a new string is available to parse
  if (stringComplete) {
    parseData(inputString);
    inputString = "";
    stringComplete = false;
  }
}

// Interrupt service routine to capture serial data
void serialEvent() {
  while (Serial.available()) {
    char inChar = (char)Serial.read();
    inputString += inChar;
    if (inChar == '\n') {
      stringComplete = true;
    }
  }
}

