#include<stdio.h>
int fact(n)
int n;
{
	printf("FACT:%d\t%p\n",n,&n);
	if(n==1)return 1;
	return fact(n-1);
}
main()
{
	printf("no.	value\n");
	printf("%d	%d\n",1,fact(1));
	printf("%d	%d\n",2,fact(2));
	printf("%d	%d\n",3,fact(3));
	printf("%d	%d\n",4,fact(4));
	printf("%d	%d\n",5,fact(5));
	return 0;
}
