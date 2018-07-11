#pragma config(Sensor, S1,     gyro,           sensorEV3_Gyro)
#pragma config(Sensor, S2,     t_right,        sensorEV3_Touch)
#pragma config(Sensor, S3,     t_left,         sensorEV3_Touch)
#pragma config(Sensor, S4,     sonic,          sensorEV3_Ultrasonic)
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
	int note[] = {523, 587, 659, 699, 784, 880, 988, 1047};
	//atoPlaySoundWithLock(soundBeepBeep);

	int song[5] = {4, 4, 2, 3, 4}
	int i, t;
	for (int i=0; i<5; i++)
	{
		t = song[i];
		playImmediateTone(frequency[t], 50);
		if(i == 4) sleep(1000);
		else sleep(500);
	}

}
