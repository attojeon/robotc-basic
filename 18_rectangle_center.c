void atoDrawRectByCenter(int cx, int cy, int size)
{
	drawLine(cx-size/2, cy-size/2, cx+size/2, cy-size/2 ); 	//BL->BR
	drawLine(cx+size/2, cy+size/2, cx-size/2, cy+size/2); 	//BR->TR
	drawLine(cx+size/2, cy+size/2, cx-size/2, cy+size+2); 	//TR->TL
	drawLine(cx-size/2, cy+size/2, cx-size/2, cy-size/2);	//TL->BL
}

task main()
{
	srand(nSysTime);

	// draw one rectangle on the center 
	atoDrawRectByCenter(128/2, 178/2, 30);

	for(int i=0; i<10; i++) {
		int ptx = rand()%100;
		int pty = rand()%50;
		int size = rand()%20 + 10;
		atoDrawRectByCenter(ptx, pty, size);
		sleep(200);
	}
	sleep(5000);

}

