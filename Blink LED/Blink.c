#include <lpc21xx.h>
int delay(void) // function for delay
{
	unsigned int i;
	for(i=1;i<900000;i++); //delay of 900ms
	return 0;
}
int main(void)
{
	IO0DIR |=(1<<11); //intializing pin P0.11 as output
	while(1)
	{
		IO0SET=(1<<11); // Turning LED on for pin P0.11
		delay();	//calling delay function
		IO0CLR=(1<<11); // Turning LED off for pin P0.11
		delay();	//calling delay function
	}
}
