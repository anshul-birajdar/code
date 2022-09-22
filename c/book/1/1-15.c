#include<stdio.h>
#define IN 1
#define OUT 0
#define MAXL 256
/* prints histogram of frequency of characters */
int main(void)
{
	int c;
	int l[MAXL];
	for(int i=0;i<MAXL;i++)l[i]=0;
	while((c = getchar())!= EOF) {
		l[c]++;
	}
	for(int i=1;i<MAXL;i++) 
		if(l[i]!=0) {
			printf("%c %x",i,i);
			for(int j=0;j<l[i];j++)
				printf("=");
			putchar('\n');
		}
}
