#include<stdio.h>
int main(void) {
	printf("%4s %7s\n","cel","fahr");
	float celsius, fahr;
	for(float i=-20;i<=150;i=i+10) {
		fahr=(9.0*i)/5.0+32.0;
		printf("%4.0f %7.1f\n",i,fahr);
	}
}
