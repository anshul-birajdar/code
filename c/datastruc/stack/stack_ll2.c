#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
	int val;
	struct node *next;
}node;

node *llcreate(void);
bool push(int num);
int pop();
void printinfo();

node *llcreate(void)
{
	node *tmp;
	tmp=malloc(sizeof(node));
	tmp->next=NULL;
	return tmp;
}


node *top;
node *lastnode;
int main(void)
{
	top=llcreate();
	lastnode=llcreate();
	push(0);
	push(2);
	push(3);
	push(12);

	int pop_val;
	while((pop_val=pop())!=INT_MIN)
	{
		printf("%d\n",pop());
	}
}

bool push(int num)
{
	printf("---Entering Push with number %d---\n",num);
	printinfo();
	lastnode=top;
	node *tmp = malloc(sizeof(node));
	tmp->val=num;
	tmp->next=top;
	top=tmp;
	printinfo();
	printf("---Exiting Push with number %d---\n",num);
	return true;
}

int  pop()
{
	printf("---Entering pop---\n");
	printinfo();
	top=lastnode;
	printinfo();
	printf("---Exiting pop---\n");
	return top->val;
}

void  printinfo()
{
	printf("PRINTINFO Enter\n");
	printf("top=%p, lastnode=%p\n",top,lastnode);
	printf("top->val=%d, top->next=%p\n",top->val,top->next);
	printf("lastnode->val=%d, lastnode->next=%p\n",lastnode->val,lastnode->next);
	printf("PRINTINFO Exit\n");
}
