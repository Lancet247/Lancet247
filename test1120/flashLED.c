#include<reg51.h>
#include<stdio.h>
void Delay(unsigned int i)
{
	unsigned int j;
	for(;i>0;i--)
	for(j=0;j<125;j++)
	{;} 
}

void main()
{


		TMOD=0x50;
		TH1=0xff;
		TL1=0xfc;		 
		EA=1;
		ET1=0;
		TR1=1;
	    while(1);
}

void T1_int(void) interrupt 2
{
	for(;;)
	{
	P1=0xff;
	Delay(500);
	P1=0;
	Delay(500);
	}
}