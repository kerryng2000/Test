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
  Project Title:Using the Ultrasonic Distance Sensor
  Team Members:Kerry Kevin Steven
  Date:2/26/18
  Section:6


  Task Description:Wait until an object is detected within 20cm to turn on motor, then when it moves more than 25cm away turns it off

*/

task main() {
	while(true) {
		untilSonarLessThan(20, sonarIn);
startMotor(leftMotor, 63);
startMotor(rightMotor, 63);
untilSonarGreaterThan(25, sonarIn);
stopMotor(leftMotor);
stopMotor(rightMotor);

}
}
