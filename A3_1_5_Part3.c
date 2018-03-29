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
  Project Title: Define a Function
  Team Members: Kerry, Kevin, Steven
  Date: 2/27/2018
  Section: 3


  Task Description:  If bumpswitch is pressed, then the LED turns on, else it won't turn on, continuous loop.

*/

void LEDControl();       //this is a function declaration
task main()
{
    while (1==1)//while(true)
    {
        LEDControl();  //function call
    }
}
void LEDControl()  //function definition
{
    if (SensorValue(bumpSwitch)==1)//if pressed
    {
        turnLEDOn(green);
    }
    else
    {
        turnLEDOff(green);
    }
}