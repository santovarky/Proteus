#include<LPC214X.h>
int main()
{
while(1)
{
	IODIR1&=(~(0x01<<16));
	IODIR0|=(0x01<<7);
	IODIR1&=(~(0x01<<17));
	IODIR0|=(0x01<<9);
	if((0x01<<16)&IOPIN1)
	{
		IOSET0|=(0x01<<7);
	}
	else
	{
	IOCLR0|=(0x01<<7);
	}
	if((0x01<<17)&IOPIN1)
	{
		IOSET0|=(0x01<<9);
	}
	else
	{
	IOCLR0|=(0x01<<9);
	}
}
}
	