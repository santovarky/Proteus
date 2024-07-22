#include<LPC214X.h>
void delay(unsigned int count);
int main()
{
while(1)
{
	IODIR0|=(0x01<<1);
	IODIR0|=(0x01<<2);
	IODIR0|=(0x01<<3);
	IODIR0|=(0x01<<4);
	IODIR0|=(0x01<<5);
	IODIR0|=(0x01<<6);
	IODIR0|=(0x01<<7);
	while(1)
	{
	//0
		IOSET0|=(0x01<<1);
		IOSET0|=(0x01<<2);
		IOSET0|=(0x01<<3);
		IOSET0|=(0x01<<4);
		IOSET0|=(0x01<<5);
		IOSET0|=(0x01<<6);
		delay(300000);
		IOCLR0|=(0x01<<1);
		IOCLR0|=(0x01<<2);
		IOCLR0|=(0x01<<3);
		IOCLR0|=(0x01<<4);
		IOCLR0|=(0x01<<5);
		IOCLR0|=(0x01<<6);
		IOCLR0|=(0x01<<7);
		delay(30000);
		
		//1
	
		IOSET0|=(0x01<<2);
		IOSET0|=(0x01<<3);
		delay(300000);
		IOCLR0|=(0x01<<1);
		IOCLR0|=(0x01<<2);
		IOCLR0|=(0x01<<3);
		IOCLR0|=(0x01<<4);
		IOCLR0|=(0x01<<5);
		IOCLR0|=(0x01<<6);
		IOCLR0|=(0x01<<7);
		delay(30000);
	
	//2
		IOSET0|=(0x01<<1);
		IOSET0|=(0x01<<2);
		IOSET0|=(0x01<<5);
		IOSET0|=(0x01<<7);
		IOSET0|=(0x01<<4);
		delay(300000);
		IOCLR0|=(0x01<<1);
		IOCLR0|=(0x01<<2);
		IOCLR0|=(0x01<<3);
		IOCLR0|=(0x01<<4);
		IOCLR0|=(0x01<<5);
		IOCLR0|=(0x01<<6);
		IOCLR0|=(0x01<<7);
		delay(30000);
	
	//3
		IOSET0|=(0x01<<1);
		IOSET0|=(0x01<<2);
		IOSET0|=(0x01<<3);
		IOSET0|=(0x01<<4);
		IOSET0|=(0x01<<7);
		delay(300000);
		IOCLR0|=(0x01<<1);
		IOCLR0|=(0x01<<2);
		IOCLR0|=(0x01<<3);
		IOCLR0|=(0x01<<4);
		IOCLR0|=(0x01<<5);
		IOCLR0|=(0x01<<6);
		IOCLR0|=(0x01<<7);
		delay(30000);
	
	
	
	//4
		IOSET0|=(0x01<<2);
		IOSET0|=(0x01<<3);
		IOSET0|=(0x01<<6);
		IOSET0|=(0x01<<7);
		delay(300000);
		IOCLR0|=(0x01<<1);
		IOCLR0|=(0x01<<2);
		IOCLR0|=(0x01<<3);
		IOCLR0|=(0x01<<4);
		IOCLR0|=(0x01<<5);
		IOCLR0|=(0x01<<6);
		IOCLR0|=(0x01<<7);
		delay(30000);

	
	
	//5
		IOSET0|=(0x01<<1);
		IOSET0|=(0x01<<3);
		IOSET0|=(0x01<<4);
		IOSET0|=(0x01<<6);
		IOSET0|=(0x01<<7);
		delay(300000);
		IOCLR0|=(0x01<<1);
		IOCLR0|=(0x01<<2);
		IOCLR0|=(0x01<<3);
		IOCLR0|=(0x01<<4);
		IOCLR0|=(0x01<<5);
		IOCLR0|=(0x01<<6);
		IOCLR0|=(0x01<<7);
		delay(30000);



	//6
		IOSET0|=(0x01<<1);
		IOSET0|=(0x01<<3);
		IOSET0|=(0x01<<4);
		IOSET0|=(0x01<<5);
		IOSET0|=(0x01<<6);
		IOSET0|=(0x01<<7);
		delay(300000);
		IOCLR0|=(0x01<<1);
		IOCLR0|=(0x01<<2);
		IOCLR0|=(0x01<<3);
		IOCLR0|=(0x01<<4);
		IOCLR0|=(0x01<<5);
		IOCLR0|=(0x01<<6);
		IOCLR0|=(0x01<<7);
		delay(30000);

	
	
	//7
	
		IOSET0|=(0x01<<1);
		IOSET0|=(0x01<<2);
		IOSET0|=(0x01<<3);
		delay(300000);
		IOCLR0|=(0x01<<1);
		IOCLR0|=(0x01<<2);
		IOCLR0|=(0x01<<3);
		IOCLR0|=(0x01<<4);
		IOCLR0|=(0x01<<5);
		IOCLR0|=(0x01<<6);
		IOCLR0|=(0x01<<7);
		delay(30000);

	
	//8
		IOSET0|=(0x01<<1);
		IOSET0|=(0x01<<2);
		IOSET0|=(0x01<<3);
		IOSET0|=(0x01<<4);
		IOSET0|=(0x01<<5);
		IOSET0|=(0x01<<6);
		IOSET0|=(0x01<<7);
		delay(300000);
		IOCLR0|=(0x01<<1);
		IOCLR0|=(0x01<<2);
		IOCLR0|=(0x01<<3);
		IOCLR0|=(0x01<<4);
		IOCLR0|=(0x01<<5);
		IOCLR0|=(0x01<<6);
		IOCLR0|=(0x01<<7);
		delay(30000);

	
	//9
	  IOSET0|=(0x01<<1);
		IOSET0|=(0x01<<2);
		IOSET0|=(0x01<<3);
		IOSET0|=(0x01<<4);
		IOSET0|=(0x01<<6);
		IOSET0|=(0x01<<7);
		delay(300000);
		IOCLR0|=(0x01<<1);
		IOCLR0|=(0x01<<2);
	  IOCLR0|=(0x01<<3);
		IOCLR0|=(0x01<<4);
		IOCLR0|=(0x01<<5);
		IOCLR0|=(0x01<<6);
		IOCLR0|=(0x01<<7);
		delay(30000);
	}
}
}
 void delay(unsigned int count)
 {
	unsigned int i;
for(i=0;i<count;i++);
 }