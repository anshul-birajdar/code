#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
	int val;
	struct node *next;
}node;

node *create(void);
bool push(int num);
int pop();

node *top=create();
node *lastnode=create();
int main(void)
{
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

node *create(void)
{
	node *tmp=malloc(sizeof(node));
	tmp->next=NULL;
	return tmp;
}

bool push(int num)
{
	lastnode=head;
	node *tmp = malloc(sizeof(node));
	tmp->val=num;
	tmp->next=top;
	top=tmp;
	return true;
}

int  pop()
{
	head=lastnode;
	return head->val;
}

	
