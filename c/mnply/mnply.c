#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"mnply.h"
#define MAXNAME 8+1

int main(void)
{
	//while(1)
	{
		int players=mnply_getint("Enter the Number of Players\n");
		char **names=malloc(players*sizeof(char *));
		for(int i=0;i<players;i++)
		{
			names[i]=malloc(MAXNAME*sizeof(char));
			fgets(names[i],MAXNAME-1,stdin);
			printf("Your name is:%s\n",names[i]);
		}
		printf("%d\n",mnply_rolldice());
	}
}
