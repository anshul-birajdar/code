#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"mnply.h"
#define MAXNAME 8+1

int main(void)
{
	int players=mnply_getint("Enter the Number of Players: ");
	char **names=malloc(players*sizeof(char *));
	mnply_getnames(players,&names,MAXNAME);
	while(1)
	{
		for(int i=0;i<players;i++)
		{
			printf("Player:\t%s\n");
			printf("Dice:\t%d\n",mnply_rolldice()+mnply_rolldice());
			getchar(stdin);
		}
	}
}
