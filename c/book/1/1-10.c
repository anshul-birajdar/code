#include<stdio.h>
int main(void) {
	char c,pc;
	c=pc='\0';
	while((c=getchar())!=EOF) {
		if(c==' '&&pc==' ')continue;
		putchar(c);
		pc=c;
	}
}
