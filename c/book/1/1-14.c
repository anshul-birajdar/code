#include<stdio.h>
#define IN 1
#define OUT 0
#define MAXL 20
/* prints histogram of length of words */
int main(void)
{
	int c, wc;
	wc = 0;
	int l[MAXL];
	for(int i=0;i<MAXL;i++)l[i]=0;
	while((c = getchar())!= EOF) {
		if(c == ' '||c == '\n'||c == '\t') {
			l[wc]++;
			wc=0;
		}
		else wc++;
	}
	for(int i=1;i<MAXL;i++)
		printf("%8d: ",i);
		for(int j=0;j<l[i];j++)
			printf("=");
		putchar('\n');
}
