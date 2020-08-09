#include <lpc21xx.h>
int delay(void)
{
	unsigned int i;
	for(i=1;i<900000;i++);
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
