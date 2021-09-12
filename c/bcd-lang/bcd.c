#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"strfun.h"
#define MAXLINE 1000
int main(void)
{
	char line[MAXLINE];
	for(;;)
	{
		printf("INPUT>");
		fgets(line,MAXLINE,stdin);
		bcd_rem_newline(line);
		if(line==NULL||*line==NULL)
			continue;
		printf("%s\n",line);
	}
	return 0;
}
	
