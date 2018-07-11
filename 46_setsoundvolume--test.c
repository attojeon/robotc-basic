#pragma config(Sensor, S1,     gyro,           sensorEV3_Gyro)
#pragma config(Sensor, S2,     t_right,        sensorEV3_Touch)
#pragma config(Sensor, S3,     t_left,         sensorEV3_Touch)
#pragma config(Motor,  motorA,          m_neck,        tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorB,          m_right,       tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          m_left,        tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#define max_volume 20


void atoPlaySoundWithLock(int nSound)
{
	playSound(nSound);
	while(bSoundActive){}
}

task main()
{
	// atoPlaySoundWithLock(soundBeepBeep);
	// sleep(1000);

	while(true)
	{
		for(int i = 0; i <= max_volume; i++)
		{
			if (i >= 20)
			{
				for(int j = max_volume; j >= 0; j--)
				{
					setSoundVolume(j);
					atoPlaySoundWithLock(1);
				}
			}
			else
			{
				setSoundVolume(i);
				atoPlaySoundWithLock(1);
			}
		}
	}


	/*
			//Assigns the EV3 brick a volume level of 25
		setSoundVolume(25);

		//Play a tone at a frequency of 784 for 150 milliseconds
		playTone(784, 15);
		atoPlaySoundWithLock(soundBeepBeep);
		sleep(1000);

		//Assigns the EV3 brick a volume level of 75
		setSoundVolume(75);

		atoPlaySoundWithLock(soundBeepBeep);
		sleep(1000);
		//Play a tone at a frequency of 784 for 150 milliseconds
		playTone(300, 15);

		atoPlaySoundWithLock(soundBeepBeep);
		sleep(1000);

		setSoundVolume(5);
		atoPlaySoundWithLock(soundBeepBeep);
		sleep(1000);
*/

}
