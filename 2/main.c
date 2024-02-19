#include "reg52.h"
typedef unsigned char u8;
typedef unsigned int u16;

void delay(u16 i)
{
	while(i--);
}
sbit led=P2^0;

void main(){
	while(1)
	{
		led=0;
		delay(10000);
		led=1;
		delay(10000);
	}
}