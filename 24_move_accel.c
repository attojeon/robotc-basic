#pragma config(Sensor, S1,     touchSensor,    sensorEV3_Touch)
#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_RateAndAngle)
#pragma config(Sensor, S3,     colorSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S4,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void moveAccel(int accel)
{
	for(int i=0; i<50; i++)
	{
		setMotorSpeed(motorB, accel++);
		setMotorSpeed(motorC, accel++);
		sleep(20);
	}

}

void moveStop()
{
	setMotorSpeed(motorB, 0);
	setMotorSpeed(motorC, 0);
}

task main()
{
	moveAccel(10);
	moveStop();
}
