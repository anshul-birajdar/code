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
}
