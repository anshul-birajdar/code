#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"mnply.h"

int main(void)
{
	while(1)
	{
		int start,end;
		start=10;
		end=20;
		srand(time(NULL));
		printf("%d\n",rand()%(end-start)+start);
	}
}
