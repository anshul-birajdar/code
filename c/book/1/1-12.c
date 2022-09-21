#include<stdio.h>
int main(void)
{
	char c;
	while((c=getchar())!=EOF) {
		if(c==' ')c='\n';
		if(c=='\t')c='\n';
		putchar(c);
	}
}
