/* ~~~~~~ */
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
typedef struct treenode
{
	int num;
	struct treenode *right;
	struct treenode *left;
}treenode;
bool treefind(treenode *root,int num);
bool treeprint(treenode *root/*,int levels, int side*/);
bool treeinsert(treenode *root, int num);
treenode *treecreate(int num);

int main(void)
{
	treenode *root=NULL;
	int num=0;
	while(num!=-1)
	{
		scanf("%d",&num);
		if(num!=-1)
		{
			if(root==NULL)
				root=treecreate(num);
			else
				treeinsert(root,num);
		}
	}
	printf("---\n");
	num=0;
	while(num!=-1)
	{
		scanf("%d",&num);
		printf("%s\n",treefind(root,num)==true?"true":"false");
	}
	printf("---\n");
	printf("Table:\n");
	treeprint(root);
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

bool treeprint(treenode *root)
{
		if(root->left!=NULL)
			treeprint(root->left);
		printf("%d\n",root->num);
		if(root->right!=NULL)
			treeprint(root->right);
		return true;
}
