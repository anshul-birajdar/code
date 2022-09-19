#include<stdio.h>
int main(void) {
	printf("%4s %7s\n","cel","fahr");
	int celsius, fahr;
	for(int i=-20;i<=150;i=i+=10) {
		fahr=(9*i)/5+32;
		printf("%4d %7d\n",i,fahr);
	}
}
