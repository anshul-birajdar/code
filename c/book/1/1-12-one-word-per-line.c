#include<stdio.h>
int main(void)
{
	char c,pc;
	pc='\0';
	while((c=getchar())!=EOF) {
		if(c==' ')c='\n';
		if(c=='\t')c='\n';
		if(c=='\n'&&pc=='\n')continue;
		putchar(c);
		pc=c;
	}
}
