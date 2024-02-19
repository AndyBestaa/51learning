#include "reg52.h"
#include "intrins.h"
#define led P2
typedef unsigned char u8;
typedef unsigned int u16;

void delay(u16 i)
{
	while(i--);
}


void main(){
	u8 i;
	u16 time=50000;
	led=0xfe;
	delay(10000);
	while(1)
	{
		for(i=0;i<7;i++){
			led=_crol_(led,1);
			delay(time);
		}
		for(i=0;i<7;i++){
			led=_cror_(led,1);
			delay(time);
		} 
	}
}