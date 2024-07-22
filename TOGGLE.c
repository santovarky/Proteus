#include<LPC214X.h>
void delay(unsigned int count);
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
		delay(30000);
		IOCLR0|=(0x01<<7);
		delay(30000);
		
	}
	else
	{
	IOCLR0|=(0x01<<7);

	}
	if((0x01<<17)&IOPIN1)
	{
		IOSET0|=(0x01<<9);
		delay(30000);
		IOCLR0|=(0x01<<9);
		delay(30000);
		
	}
	else
	{
	IOCLR0|=(0x01<<9);
	
	}
}
}
 void delay(unsigned int count)
 {
	unsigned int i;
	for(i=0;i<count;i++);
 }

	