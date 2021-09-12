#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"strfun.h"
#define MAXLINE 1000
#define MAXTOKEN 2
int main(void)
{
	char *c;
	char line[MAXLINE];
	char tokens[MAXTOKEN][MAXLINE];
	int currentoken=0;
	int currentchar=0;
	int ntokens=0;	
	for(;;)
	{
		if(bcd_getline(line,MAXLINE)==true||*line=='\0')continue;
		c=line;
		while(1)
		{
			if(*c=='\n')
			{
				currentoken++;
				currentchar=0;
				c++;
			}
			else if(*c=='\0')
			{
				ntokens=currentoken;
				break;
			}
			else tokens[currentoken][currentchar++]=*c++;
			
		}		
		printf("LINE=%s\n",line);
		printf("NTOKENS=%d",ntokens);
	}
	return 0;
}
	
