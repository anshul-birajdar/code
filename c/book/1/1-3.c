#include<stdio.h>
int main(void) {
	float fahr, celsius;
	int lower, upper, step;	
	lower=0;
	upper=300;
	step=20;
	fahr=lower;
	//while(fahr<=upper) {
	for(int i=0;i<=300;i=i+20)
		celsius=(5.0/9.0)*(fahr-32.0);
		printf("%3.0f %6.1f\n",fahr,celsius);
		//fahr=fahr+step;
	}
}
