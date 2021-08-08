#include<stdio.h>
#include<stdbool.h>
#define MAX_VERTEX 20
void connect(bool *paths[MAX_VERTEX][MAX_VERTEX],int x,int y);
void printpaths(bool paths[MAX_VERTEX][MAX_VERTEX]);
bool ifconnected(bool paths[MAX_VERTEX][MAX_VERTEX],int x,int y);
int main(void)
{
	int list[MAX_VERTEX]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	bool paths[MAX_VERTEX][MAX_VERTEX];
	connect(&paths,0,5);
	connect(&paths,2,5);
	connect(&paths,7,8);
	printpaths(paths);
	printf("2,3:%d\n",ifconnected(paths,2,3));
}	

void connect(bool *paths[MAX_VERTEX][MAX_VERTEX],int x,int y)
{
	*(paths)[x][y]=true;
	*(paths)[y][x]=true;
}


void printpaths(bool paths[MAX_VERTEX][MAX_VERTEX])
{
	for(int i=0;i<20;i++)
		for(int j=0;j<20;j++)
			printf("%d<->%d=%s\n",i,j,paths[i][j]==true?"true":"false");
}

bool ifconnected(bool paths[MAX_VERTEX][MAX_VERTEX],int x,int y)
{
	if(paths[x][y]==1||paths[y][x]==1)return true;
	return false;
}

			
