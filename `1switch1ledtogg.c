#include<LPC214X.h>
int main()
{
while(1)
{
	IODIR1&=(~(0x01<<16));
	IODIR1|=(0x01<<7);
	IODIR1&=(~(0x01<<17));
	IODIR1|=(0x01<<8);
	if((0x01<<16)&IOPIN1)
	{
		IOCLR0|=(0x01<<7);
		delay(300000);
	}
	else
	{
	IOSET0|=(0x01<<7);
	delay(300000);
	}
	if((0x01<<17)&IOPIN1)
	{
		IOCLR0|=(0x01<<8);
		delay(300000);
	}
	else
	{
	IOSET0|=(0x01<<8);
	delay(300000);
	}
}
}
	