#include<stdio.h>
int main(void) {
	float fahr, celsius;
	for(float i=0;i<=300;i=i+20) {
		celsius=(5.0/9.0)*(i-32.0);
		printf("%3.0f %6.1f\n",i,celsius);
	}
}
