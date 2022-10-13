#include<stdio.h>
#define MAXLINE 1000
char *get_line(char *line,int maxline);
/* reverses the output, a line at a time */
int main(void)
{
	char line[MAXLINE], *end;
	while(*(end=get_line(line,MAXLINE))!=EOF) {
		while(*end==' '||*end=='\t')end--;
		end[1]='\0';
		printf("%s",line);
		if(*line!='\0')printf("\n");
	}
}
char *get_line(char *s,int lim)
{
	char *end;
	int c,i;
	for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';i++)
		s[i]=c;
	if(c=='\n') {
		s[i]=c;
		end=&s[i-1];
		i++;
	}
	s[i]='\0';
	return end;
}
