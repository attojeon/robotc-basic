#pragma config(Sensor, S1,     gyro,           sensorEV3_Gyro)
#pragma config(Sensor, S2,     t_right,        sensorEV3_Touch)
#pragma config(Sensor, S3,     t_left,         sensorEV3_Touch)
#pragma config(Motor,  motorA,          m_neck,        tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorB,          m_right,       tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          m_left,        tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void atoPlaySoundWithLock(int nSound)
{
	playSound(nSound);
	while(bSoundActive){}
}

task main()
{
	//int ret =0;
	atoPlaySoundWithLock(soundBeepBeep);
	for (int i=0; i<360*1000000; i++)
	{
		int nRatio = (int)(sinDegrees(i)*100);
		nRatio /=3;
		displayBigTextLine(5, "%d", nRatio);
		setMotorSync(m_right, m_left, nRatio, 40);
		sleep(30);
		if(i == 360*1000000) i=0;
	}

}
