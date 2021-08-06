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
	treenode *root=treecreate(10);
	treeinsert(root,15);
	treeinsert(root,100);
	treeinsert(root,12);
	treeinsert(root,14);
	treeinsert(root,13);
	
	treeinsert(root,8);
	treeinsert(root,3);
	treeinsert(root,1);
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
