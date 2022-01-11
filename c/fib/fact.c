#define MAX 7
#include<stdio.h>
int fact(n)
int n;
{
	printf("FACT:%d\t%p\n",n,&n);
	if(n==1)return 1;
	return  n * fact(n-1);
}
main(argc,argv)
int argc;
char **argv;
{
	printf("no.	value\n");
	int i;
	for(i=1;i<=MAX;i++)
		printf("%d	%d\n",i,fact(i));
	return 0;
}
