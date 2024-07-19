#include <LPC214X.h>
void delay(unsigned int count);
int main()
{
	  int loop_count = 0; 
  IODIR0 |= (1 << 4);
  IODIR0 |= (1 << 5);
  IODIR0 |= (1 << 6);
 while(loop_count < 5)  
  {
    IOSET0 |= (1 << 4);
    delay(500000);
    IOCLR0 |= (1 << 4);
		IOSET0 |= (1 << 5);
		delay(500000);
		IOCLR0 |= (1 << 5);
    IOSET0 |= (1 << 6);
    delay(500000);
    IOCLR0 |= (1 << 6);
     loop_count++;  
  }
  while(1);
}
void delay(unsigned int count)
{
  unsigned int i;
  for(i = 0; i < count; i++);
}
