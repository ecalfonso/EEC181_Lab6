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

void main(void) {
	int avg;
	
	// Start the camera
	*(iStart) = 1;
	
	while(1)
	{
		
	}
}