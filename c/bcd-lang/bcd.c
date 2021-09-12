#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"strfun.h"
#define MAXLINE 1000
int main(void)
{
	char c;
	char line[MAXLINE];
	for(;;)
	{
		if(bcd_getline(line,MAXLINE)==true)continue;
		printf("%s\n",line);
	}
	return 0;
}
	
