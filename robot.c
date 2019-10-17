#include<reg52.h>
#include<stdio.h>
#include<robot.h>

unsigned int a;

void main()
{
	while(1)
	{
		a=P1&0x03;
		
		if(a==0x00)
			P2=stop;
		if(a==0x01)
			P2=lt;
		if(a==0x02)
			P2=rt;
		if(a==0x03)
			P2=st;
	}
}