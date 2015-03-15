#include <stdio.h>

volatile int * iStart	= (int *) 0xFF2000C0;
volatile int * iData	= (int *) 0xFF200100;
volatile int * oData	= (int *) 0xFF200080;
volatile int * oMuxSel	= (int *) 0xFF2000A0;
volatile int * oWrite	= (int *) 0xFF200040;
volatile int * oRead	= (int *) 0xFF200060;
volatile int * iGeneral1	= (int *) 0xFF2000f0;
volatile int * iGeneral2	= (int *) 0xFF2000e0;
volatile int * oGeneral1	= (int *) 0xFF200020;
volatile int * oGeneral2	= (int *) 0xFF200000;

volatile int * DDR3			= (int *) 0x0010000; // Up to 0xFFF0000

void delay(void) 
{
	int j, input = 0;
	for (j = 0; j < 50000000; j++){input = j;}
}

void main(void) {
	int input;
	
	// Start the camera
	*(iStart) 		= 0;
	*(oMuxSel)		= 0;		// In this case the MuxSel == HPSClk in verilog
	*(iStart) 		= 1;	
	printf("Begin!\n");
	
	while (1) 
	{
		printf("Press anything to clock\n");
		scanf("%d", &input);
		*oMuxSel = 1;
		delay ();
		*oMuxSel = 0;
	}

	printf("Done!\n");
}