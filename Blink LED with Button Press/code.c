#include<lpc21xx.h>
unsigned int k,i;
int main(void)
{
	while(1)
	{
		k=IO0PIN&(1<<10);          //k=0 is Button is pressed otherwise k=0 
		for (i=1;i<=9000;i++)      //delay between reading click of button
		{
		}
	  if (!k)                    //checking if button is pressed or not
    {
			IO0DIR |=(1<<11); //initializing Pin P0.11 as output
		  IO0SET = (1<<11);        // Turning LED on
                 }
     else
		 {
			 IO0CLR=(1<<11);         // Turning LED OFF
		 }						 
  }
}