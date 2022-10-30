#include<stdio.h>
#define IN 1
#define OUT 0
/* miniwc -- always prints l w c, ignores options */
/* test -- ASCII only. Give random input and
   compare the same input with the program and wc. Newline
   after a space may be counted as a word */
int main(void)
{
	int c,nl,nw,nc,state;
	state=OUT;
	nl=nw=nc=0;
	while((c=getchar())!=EOF) {
		nc++;
		if(c=='\n')nl++;
		if(c==' '||c=='\n'||c=='\t')state=OUT;
		else if(state==OUT) {
			state=IN;
			nw++;
		}
	}
	printf("%d %d %d\n",nl,nw,nc);
}
