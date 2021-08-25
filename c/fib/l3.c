#define MAX_SEARCH 0xFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	long x,y,z;
	x=1;
	y=1;
	for(long i=0;i<MAX_SEARCH;i++)
	{
		z=x+y;
		x=y;
		y=z;
		printf("%ld\n",x);
	}
	return 0;
}
	
