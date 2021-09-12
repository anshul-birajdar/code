#include<stdio.h>
#define MAXLINE 1000
int main(void)
{
	char line[MAXLINE];
	for(;;)
	{
		scanf("%s",line);
		printf("%s\n",line);
	}
	return 0;
}
	
