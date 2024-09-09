#include <Servo.h>

// Create Servo objects
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

// Define the pins for the servos
const int servoPin1 = 2;
const int servoPin2 = 3;
const int servoPin3 = 4;
const int servoPin4 = 5;
const int servoPin5 = 6;
const int servoPin6 = 7;

// Function to handle servo movements based on input
void handleInput(char inputChar) {
    switch (inputChar) {
        case 'a':
            servo1.write(90);
            servo2.write(0);
            servo3.write(180);
            servo4.write(0);
            servo5.write(0);
            servo6.write(180);
            break;
        case 'b':
            servo1.write(90);
            servo2.write(0);
            servo3.write(90);
            servo4.write(0);
            servo5.write(0);
            servo6.write(180);
            break;
        case 'c':
            servo1.write(90);
            servo2.write(90);
            servo3.write(180);
            servo4.write(0);
            servo5.write(0);
            servo6.write(180);
            break;
        case 'd':
            servo1.write(90);
            servo2.write(90);
            servo3.write(180);
            servo4.write(90);
            servo5.write(0);
            servo6.write(180);
            break;
        case 'e':
            servo1.write(90);
            servo2.write(0);
            servo3.write(180);
            servo4.write(90);
            servo5.write(0);
            servo6.write(180);
            break;
        case 'f':
            servo1.write(90);
            servo2.write(90);
            servo3.write(90);
            servo4.write(0);
            servo5.write(0);
            servo6.write(180);
            break;
        case 'g':
            servo1.write(90);
            servo2.write(90);
            servo3.write(90);
            servo4.write(90);
            servo5.write(0);
            servo6.write(180);
            break;
        case 'h':
            servo1.write(90);
            servo2.write(0);
            servo3.write(90);
            servo4.write(90);
            servo5.write(0);
            servo6.write(180);
            break;
        case 'i':
            servo1.write(180);
            servo2.write(90);
            servo3.write(90);
            servo4.write(0);
            servo5.write(0);
            servo6.write(180);
            break;
        case 'j':
            servo1.write(180);
            servo2.write(90);
            servo3.write(90);
            servo4.write(90);
            servo5.write(0);
            servo6.write(180);
            break;
        case 'k':
            servo1.write(90);
            servo2.write(0);
            servo3.write(180);
            servo4.write(0);
            servo5.write(90);
            servo6.write(180);
            break;
        case 'l':
            servo1.write(90);
            servo2.write(0);
            servo3.write(90);
            servo4.write(0);
            servo5.write(0);
            servo6.write(90);
            break;
        case 'm':
            servo1.write(90);
            servo2.write(90);
            servo3.write(180);
            servo4.write(0);
            servo5.write(90);
            servo6.write(180);
            break;
        case 'n':
            servo1.write(90);
            servo2.write(0);
            servo3.write(180);
            servo4.write(90);
            servo5.write(90);
            servo6.write(180);
            break;
        case 'o':
            servo1.write(90);
            servo2.write(0);
            servo3.write(90);
            servo4.write(0);
            servo5.write(90);
            servo6.write(180);
            break;
        case 'p':
            servo1.write(90);
            servo2.write(90);
            servo3.write(90);
            servo4.write(0);
            servo5.write(90);
            servo6.write(180);
            break;
        case 'q':
            servo1.write(90);
            servo2.write(90);
            servo3.write(90);
            servo4.write(90);
            servo5.write(90);
            servo6.write(180);
            break;
        case 'r':
            servo1.write(90);
            servo2.write(0);
            servo3.write(90);
            servo4.write(90);
            servo5.write(90);
            servo6.write(180);
            break;
        case 's':
            servo1.write(180);
            servo2.write(90);
            servo3.write(90);
            servo4.write(0);
            servo5.write(90);
            servo6.write(180);
            break;
        case 't':
            servo1.write(180);
            servo2.write(90);
            servo3.write(90);
            servo4.write(90);
            servo5.write(90);
            servo6.write(180);
            break;
        case 'u':
            servo1.write(90);
            servo2.write(0);
            servo3.write(180);
            servo4.write(0);
            servo5.write(90);
            servo6.write(90);
            break;
        case 'v':
            servo1.write(90);
            servo2.write(0);
            servo3.write(90);
            servo4.write(0);
            servo5.write(90);
            servo6.write(90);
            break;
        case 'w':
            servo1.write(180);
            servo2.write(90);
            servo3.write(90);
            servo4.write(90);
            servo5.write(0);
            servo6.write(90);
            break;
        case 'x':
            servo1.write(90);
            servo2.write(0);
            servo3.write(180);
            servo4.write(0);
            servo5.write(90);
            servo6.write(90);
            break;
        case 'y':
            servo1.write(90);
            servo2.write(90);
            servo3.write(180);
            servo4.write(90);
            servo5.write(90);
            servo6.write(90);
            break;
        case 'z':
            servo1.write(90);
            servo2.write(0);
            servo3.write(180);
            servo4.write(90);
            servo5.write(90);
            servo6.write(90);
            break;
        case '$':
            // Reset all servos to 0 degrees
            servo1.write(180);
            servo2.write(0);
            servo3.write(180);
            servo4.write(0);
            servo5.write(0);
            servo6.write(180);
            break;
        default:
            Serial.println("Enter a letter from 'a' to 'z' or '$' to reset all servos.");
            break;
    }
}

void setup() {
    // Initialize serial communication
    Serial.begin(9600);

    // Initialize the servo motors
    servo1.attach(servoPin1);
    servo2.attach(servoPin2);
    servo3.attach(servoPin3);
    servo4.attach(servoPin4);
    servo5.attach(servoPin5);
    servo6.attach(servoPin6);

    // Set initial positions
    servo1.write(180);
    servo2.write(0);
    servo3.write(180);
    servo4.write(0);
    servo5.write(0);
    servo6.write(180);

    Serial.println("Enter a letter from 'a' to 'z' or '$' to reset all servos:");
}

void loop() {
    if (Serial.available() > 0) {
        char inputChar = Serial.read();
        Serial.print("Received: ");
        Serial.println(inputChar);
        handleInput(inputChar);
    }
}
//Credits: This code is crafted with passion and dedication by Uneeb
