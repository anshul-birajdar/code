#include<stdio.h>
#define MAXLINE 1000
int get_line(char *line,int maxline,char *last);
/* removes trailing blanks and tabs and prints lines */
int main(void)
{
	int len;
	char line[MAXLINE], *end;
	len=get_line(line,MAXLINE,end);
}
int get_line(char *s,int lim,char *end)
{
	int c,i;
	for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';i++)
		s[i]=c;
	if(c=='\n') {
		s[i]=c;
		end=&s[i-1];
		i++;
	}
	s[i]='\0';
	return i;
}
