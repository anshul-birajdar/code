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
	tmp->val=0;
	tmp->next=NULL;
	return tmp;
}


node *top;
int main(void)
{
	top=llcreate();
	for(int i=0;i<100;i+=7)
		push(i);
	printf(">>>>>>>> NUMBER >>>>>>>>\n");
	int pop_val;
	while((pop_val=pop())!=0)
	{
		printf(">>>>>>>>%8d>>>>>>>>\n",pop_val);
	}

}

bool push(int num)
{
	node *tmp = malloc(sizeof(node));
	tmp->val=num;
	tmp->next=top;
	top=tmp;
	return true;
}

int  pop()
{
	int topval=top->val;
	top=top->next;
	return topval;
}

