#include<stdio.h>
int fib(n)
int n;
{
	printf("FIB:%d\t%p\n",n,&n);
	if(n==1)return 1;
	if(n==2)return 1;
	return fib(n-1) + fib(n-2);
}
main()
{
	printf("no.	value\n");
	printf("%d	%d\n",1,fib(1));
	printf("%d	%d\n",2,fib(2));
	printf("%d	%d\n",3,fib(3));
	printf("%d	%d\n",4,fib(4));
	printf("%d	%d\n",5,fib(5));
	return 0;
}
