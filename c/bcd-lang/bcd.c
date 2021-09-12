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
		printf("INPUT>");
		fgets(line,MAXLINE,stdin);
		bcd_rem_newline(line);
		if(line==NULL)//||feof(stdin))
			continue;
		if(bcd_getif_eof(line))
			exit(EXIT_SUCCESS);
		printf("%s\n",line);
	}
	return 0;
}
	
