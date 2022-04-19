#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXLINE 10
int main(void)
{
	char line[MAXLINE];
	char newline[MAXLINE];
	fgets(line,MAXLINE,stdin);
	int len = strlen(line);

	for(int i=0;line[i]!='\0';i++) {
		printf("%c",line[i]);
		if(len%3==1&&i%3==2)printf(",");
		if(len%3==2&&i%3==0)printf(",");
		if(len%3==0&&i%3==1)printf(",");
	}
}
