#include<lpc21xx.h>
unsigned int k,i;
int main(void)
{
	while(1)
	{
		k=IO0PIN&(1<<10);
		for (i=1;i<=9000;i++)
		{
		}
	  if (!k)    
    {
			IO0DIR |=(1<<11);
		  IO0SET = (1<<11); 
                 }
     else
		 {
			 IO0CLR=(1<<11);
		 }						 
  }
}
