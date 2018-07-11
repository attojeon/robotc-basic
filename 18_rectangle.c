/*
	What atoDrawRect???
*/
void atoDrawRect(int ptX, int ptY, int size)
{
	drawLine(ptX, ptY, ptX-size/2, ptY+size/2);
	sleep(1000);
	drawLine(ptX-size/2, ptY-size/2, ptX-size/2, ptY+size/2);
	sleep(1000);
	drawLine(ptX-size/2, ptY+size/2, ptX+size/2, ptY+size/2);
	sleep(1000);
	drawLine(ptX+size/2, ptY+size/2, ptX+size/2, ptY-size/2);
	sleep(1000);
	drawLine(ptX+size/2, ptY-size/2, ptX-size/2, ptY-size/2);
	sleep(1000);
}

task main()
{
	srand(nSysTime);

	atoDrawRect(30, 30, 20);

	for(int i=0; i<10; i++) {
		int ptx = rand()%100;
		int pty = rand()%50;
		int ptCenter = rand()%100;
		atoDrawRect(ptx, pty, ptCenter);
	}
	sleep(5000);


}

