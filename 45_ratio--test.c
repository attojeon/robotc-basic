#pragma config(Sensor, S1,     gyro,           sensorEV3_Gyro)
#pragma config(Sensor, S2,     t_right,        sensorEV3_Touch)
#pragma config(Sensor, S3,     t_left,         sensorEV3_Touch)
#pragma config(Motor,  motorA,          m_neck,        tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorB,          m_right,       tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          m_left,        tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//


task main()
{

		setMotorSync(m_right, m_left, 0, 10);
		sleep(3000);

		setMotorSync(m_right, m_left, 10, 10);
		sleep(3000);
		setMotorSync(m_right, m_left, 200, 10);
		sleep(3000);
		setMotorSync(m_right, m_left, -30, 10);
		sleep(3000);


}
