#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXBUF 1000
int main(void)
{
	printf("]");
	char arg1[MAXBUF],arg2[MAXBUF];
	scanf("%s %s",arg1,arg2);
	if(strcmp(arg1,"print")==0)
		printf("%d\n",atoi(arg2));
}
