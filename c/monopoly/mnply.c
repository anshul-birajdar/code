#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"mnply.h"

int main(void)
{
	while(1)
	{
		srand(time(NULL));
		printf("%d\n",rand()%20-10);
	}
}
