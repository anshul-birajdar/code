#include<stdio.h>
#define MAXLINE 1000
int get_line(char *line,int maxline);
void reverse(char *to,char *from,int len);
/* reverses input per line */
int main(void)
{
	char line[MAXLINE];
	char rev[MAXLINE];
	int len=get_line(line,MAXLINE);
	reverse(rev,line,len);
	printf("%s\n",rev);
}
int get_line(char *s,int lim)
{
	int c,i;
	for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';i++)
		s[i]=c;
	//if(c=='\n') {
	//	s[i]=c;
	//i++;
	//}
	s[i]='\0';
	return i;
}
void reverse(char *to,char *from,int len)
{
	int i,j;
	i=j=0;
	for(i=len-1,j=0;i>=0;i--,j++)
		to[j]=from[i];
	to[j]='\0';	
}
