#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


volatile int * Start      = (int * )0xFF200070;
volatile int * Rin      = (int * )0xFF200040;
volatile int * Gin      = (int * )0xFF200050;
volatile int * Bin      = (int * )0xFF200060;
volatile int * Rout      = (int * )0xFF200010;
volatile int * Gout     = (int * )0xFF200020;
volatile int * Bout      = (int * )0xFF200030;
volatile int * fVal      = (int * )0xFF200000;


void delay(int v) {
	int c, d;
	int max;
	max = 10 * v;
	for(c = 1; c <= max; c++)
		{}
	return 0;
}

int main() {
	int avg;
	
	*(Start) = 1;
	while(1)
	{
		avg = (*(Rin) + *(Gin) + *(Bin))/3;
		*(Rout) = avg;
		*(Gout) = avg;
		*(Bout) = avg;
		
		while(*(fVal) == 1)
		{
		}
		
	}
	

	return 0;
}