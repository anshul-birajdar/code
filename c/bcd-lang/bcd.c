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
		if(bcd_getif_eof(line)==true)
			exit(EXIT_SUCCESS);
		printf("%s\n",line);
	}
	return 0;
}
	
