#include<stdio.h>
int main(void) {
	printf("%4s %7s\n","fahr","celsius");
	float fahr, celsius;
	for(float i=300;i>=0;i=i-20) {
		celsius=(5.0/9.0)*(i-32.0);
		printf("%4.0f %7.1f\n",i,celsius);
	}
}
