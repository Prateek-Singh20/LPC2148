#include <lpc21xx.h>
int delay(void) // function for delay of 100 ms
{
	T0MR0=100000;  //max count for delay
	T0MCR=0x00000004; //when MR0 stop
	T0TCR=1;  //enable timer 0
	while(T0TC!=T0MR0);
	T0TC=0; // resetv timer
	return 0;
}
int main(void)
{
	IO0DIR |=(1<<11); //intializing pin  P0.10 as output 
	while(1)
	{
		IO0SET=(1<<11); //Turn LED on
		delay();
		IO0CLR=(1<<11); //Turn LED off
		delay();
	}
}
