#include<stdio.h>
#define TABLEN 8
/* entab -- converts spaces into tabs
   and spaces (priority to spaces) */
int main(void)
{
	char c;
	int len=0;
	int ts;
	while((c=getchar())!=EOF) {
		if(c=='\n') {
			len=0;
			putchar('\n');
		}
		else if(c=='\t') {
			ts=len%TABLEN;
			ts=TABLEN-ts;
			for(int i=0;i<ts;i++) {
				putchar(' ');
				len++;
			}
		}
		else {
			len++;
			putchar(c);
		}
	}
}
