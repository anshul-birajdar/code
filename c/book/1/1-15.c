#include<stdio.h>
int ftoc(float f);
int main(void)
{
	printf("%4s %7s\n","fahr","celsius");
	float fahr, celsius;
	for(int i=0;i<=300;i=i+20) {
		//celsius=(5.0/9.0)*(i-32.0);
		float fi=i;
		celsius=ftoc(fi);
		printf("%4d %7.1f\n",i,celsius);
	}
}
int ftoc(float f) {
	float c = (5.0/9.0)*(f-32.0);
	return c;
}
