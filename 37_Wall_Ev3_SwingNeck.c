#pragma config(Sensor, S2,     touch_r,        sensorEV3_Touch)
#pragma config(Sensor, S3,     touch_l,        sensorEV3_Touch)
#pragma config(Sensor, S4,     ultrasonic,     sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          motor_neck,    tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorB,          motor_r,       tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          motor_l,       tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
void ForeBack()
{
	for(int i=0; i<nCnt; i++)
		{
			setMotorSpeed(motor_l, 10);
			setMotorSpeed(motor_r, 10);
			sleep(200);
			setMotorSpeed(motor_l, 0);
			setMotorSpeed(motor_r, 0);
			sleep(200);
			setMotorSpeed(motor_l, -10);
			setMotorSpeed(motor_r, -10);
			sleep(200);
			setMotorSpeed(motor_l, 0);
			setMotorSpeed(motor_r, 0);
		}
}*/

void atoSwingNeck(int nCnt)
{
	for(int i=0; i<nCnt; i++)
		{
			setMotorSpeed(motor_neck, 50);
			sleep(200);
			setMotorSpeed(motor_neck, -50);
			sleep(200);
		}

}

task main()
{
	atoSwingNeck(3);

}