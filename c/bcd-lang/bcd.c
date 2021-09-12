#include<stdio.h>
#include"strfun.h"
#define MAXLINE 1000
int main(void)
{
	char line[MAXLINE];
	for(;;)
	{
		//scanf("%s",line);
		fgets(line,MAXLINE,stdin);
		bcd_rem_newline(line);
		printf("%s\n",line);
	}
	return 0;
}
	
