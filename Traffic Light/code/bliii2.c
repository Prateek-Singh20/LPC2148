#include<lpc21xx.h>

unsigned int de;

int main(void)
{
	IO0DIR =(1<<12);
		IO0DIR =(1<<11);
		IO0DIR =(1<<10);
	while(1)
	{
		
		IO0CLR = (1<<10);
		for(de=0;de<90000;de++);
		IO0SET = (1<<10);
		for(de=0;de<90000;de++);
		
		IO0CLR = (1<<11);
		for(de=0;de<90000;de++);
		IO0SET = (1<<11);
		for(de=0;de<90000;de++);
		
		IO0CLR = (1<<12);
		for(de=0;de<90000;de++);
		IO0SET = (1<<12);
		for(de=0;de<90000;de++);
	}
}
