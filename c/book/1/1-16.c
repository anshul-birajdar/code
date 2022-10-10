#include<stdio.h>
#define MAXLINE 1000
int main(void)
{
	int len,max;
	len=max=0;
	char c='\0';
	while(c!=EOF) {
		for(len=0;(c=getchar())!=EOF&&c!='\n';len++);
		if(len>max)max=len;
	}
	printf("%d\n",max);
}
