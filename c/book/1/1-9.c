#include<stdio.h>
int main(void) {
	char c,pc;
	c=pc='\0';
	while((c=getchar())!=EOF) {
		if(pc!=' ')putchar(c);
		pc=c;
	}
}
