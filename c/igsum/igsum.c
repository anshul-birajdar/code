#include<stdio.h>
#include<stdlib.h>
#define END 100
int main(int argc, char **argv){
if(argc<=2) {
	printf("igsum:arg count\n");
	exit(1);
}
double a = atof(argv[1]);
double r = atof(argv[2]); 
double sum = 0; 
double n = a;
int end;
if(argc>=4)
	end = atoi(argv[3]);
else
	end = END;
for(int i=0;i<end;i++) {
	//printf("a=%f,r=%f,sum=%f,n=%f\n",a,r,sum,n);
	printf("%.30f\n",sum);
	sum = sum + n;
	n = n * r;
}

}
