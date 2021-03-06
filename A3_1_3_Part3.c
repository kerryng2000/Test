#pragma config(Sensor, in1,    lineFollower,   sensorLineFollower)
#pragma config(Sensor, in2,    potentioMeter,  sensorPotentiometer)
#pragma config(Sensor, in3,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl1,  limitSwitch,    sensorTouch)
#pragma config(Sensor, dgtl2,  encoder,        sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  sonarIn,        sensorSONAR_inch)
#pragma config(Sensor, dgtl11, led,            sensorLEDtoVCC)
#pragma config(Sensor, dgtl12, bumpSwitch,     sensorDigitalIn)
#pragma config(Motor,  port1,           flashLight,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port2,           leftMotor,     tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port3,           rightMotor,    tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port8,           servo,         tmotorServoStandard, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
  Project Title:Using the Potentiometer
  Team Members:Kerry,Kevin,Steven
  Date:2/26/18
  Section:3


  Task Description: Turns on the led, if it's greater than 2048, turns off led, and turns on leftmotor if the potentiometer is less than 2048, then wait 3.5secs, and turn it off

*/

task main() {
	while(true) {
turnLEDOn(led);
untilPotentiometerGreaterThan(2048, potentiometer);
turnLEDOff(led);
startMotor(leftMotor, 63);
wait(3.5);
stopMotor(leftMotor);
}
}
