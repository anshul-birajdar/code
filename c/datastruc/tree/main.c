#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define SIDE_LEFT 1
#define SIDE_RIGHT 2
#define SIDE_MAIN 3
#define STR_MAX 1000
typedef struct treenode
{
	int num;
	struct treenode *right;
	struct treenode *left;
}treenode;
bool treefind(treenode *root,int num);
bool treeprint(treenode *root,int levels, int side);
bool treeinsert(treenode *root, int num);
treenode *treecreate(int num);
char *sidename(int side);
char *treelevel(int num);

int main(void)
{
	treenode *root=treecreate(10);
	treeinsert(root,15);
	treeinsert(root,12);
	treeinsert(root,14);
	treeinsert(root,13);
	printf("12 is there is %s\n",treefind(root,12)?"true":false);
	//printf("11 is there is %s\n",treefind(root,11)?"true":false);
	treeprint(root,0,SIDE_MAIN);
}
treenode *treecreate(int num)
{
	treenode *node= malloc(sizeof(treenode));
	node->left=NULL;
	node->right=NULL;
	node->num=num;
	return node;
}
bool treeinsert(treenode *root,int num)
{
	if(num < root->num)
		if(root->left==NULL)
			root->left=treecreate(num);
		else
			treeinsert(root->left,num);
	else if(num > root->num)
		if(root->right==NULL)
			root->right=treecreate(num);
		else
			treeinsert(root->right,num);
	else if(num == root->num)
		return false;
	return true; // If number==root will exit above
}

bool treefind(treenode *root, int num)
{
	if(num == root->num)
		return true;
	else if(num < root->num)
	{
		if(root->left == NULL)
			return false;
		else
			return treefind(root->left,num);
	}
	else if(num > root->num)
	{
		if(root->right == NULL)
			return false;
		else
			return treefind(root->right,num);
	}
	return false;
}	

bool treeprint(treenode *root,int levels,int side)
{
		printf("%s%s:%d",treelevel(levels),sidename(side),root->num);
		if(root->left==NULL)
		{
			printf("--------");
			return true;
		}
		else
			treeprint(root->left,0,SIDE_LEFT);
		if(root->right==NULL)
		{
			printf("--------");
			return true;
		}
		else
			treeprint(root->right,0,SIDE_RIGHT);
		return true;
}
char *treelevel(int num)
{
	char *returnval=malloc(sizeof(char)*STR_MAX);	
	int i,copy;
	for(i=0;i<num;copy=++i)
		returnval[i]='\t';
	returnval[copy]='\0';
	returnval[copy+1]='\0';
	return returnval;
}
char *sidename(int side)
{
	if(side==SIDE_MAIN)return "root";
	if(side==SIDE_LEFT)return "left";
	if(side==SIDE_RIGHT)return "right";
	return "illegal";
}
