#include "reg51.h"
#include "intrins.h"
#define uchar unsigned char
#define uint unsigned int
#define out P2
void delayms(nint);

void main()
{
uchar i, temp;
while(1)
	{
	temp=0xfe;
	for(i=0;i<8;i++)
		{out=temp;
		P1=temp;
		P3=temp;
		P0=temp;
		delayms(500);
		temp=_crol_(temp,1);
		}
	}
}

void delayms(uint j)
{
uchar i;
for(;j>0;j--)
	{i = 250;
	while(--i);
	i = 249;
	while(--i);
	}
}
