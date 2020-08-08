#include <lpc21xx.h>
int delay(void)
{
	T0MR0=100000;
	T0MCR=0x00000004;
	T0TCR=1;
	while(T0TC!=T0MR0);
	T0TC=0;
	return 0;
}
int main(void)
{
	IO0DIR |=(1<<11);
	while(1)
	{
		IO0SET=(1<<11);
		delay();
		IO0CLR=(1<<11);
		delay();
	}
}
