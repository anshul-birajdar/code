#include<stdio.h>
#define MAXLINE 1000
int main(void)
{
	char line[MAXLINE];
	for(;;)
	{
		//scanf("%s",line);
		fgets(line,MAXLINE,stdin);
		printf("%s\n",line);
	}
	return 0;
}
	
