#include<lpc21xx.h>

unsigned int de;

int main(void)
{
	IO0DIR =(1<<12);		// setting pin P0.12 as output
		IO0DIR =(1<<11);	// setting pin P0.11 as output
		IO0DIR =(1<<10);	// setting pin P0.10 as output
	while(1)
	{
		
		IO0CLR = (1<<10);	// Turning LED off for pin P0.10
		for(de=0;de<90000;de++);
		IO0SET = (1<<10);	// Turning LED on for pin P0.10
		for(de=0;de<90000;de++);
		
		IO0CLR = (1<<11);	// Turning LED off for pin P0.11
		for(de=0;de<90000;de++);
		IO0SET = (1<<11);	// Turning LED on for pin P0.10
		for(de=0;de<90000;de++);
		
		IO0CLR = (1<<12);	// Turning LED off for pin P0.12
		for(de=0;de<90000;de++);
		IO0SET = (1<<12);	// Turning LED on for pin P0.10
		for(de=0;de<90000;de++);
	}
}
