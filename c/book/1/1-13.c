#include<stdio.h>
#define IN 1
#define OUT 0
#define MAXL 20
/* miniwc -- always prints l w c, ignores options */
/* ASCII only. Counts all chars other that ' ', '\t', '\n'
   as characters */
int main(void)
{
	int c, wc;
	wc = 0;
	int l[MAXL];
	while((c = getchar())!= EOF) {
		if(c == ' '||c == '\n'||c == '\t') {
			l[wc]++;
			wc=0;
		}
		else wc++;
	}
	for(int i=1;i<MAXL;i++)
		if(l[i]!=0)
			printf("%d %d\n",i,l[i]);
}

