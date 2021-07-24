#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define MAXSTACK 1000

int stack[MAXSTACK];
int *top=&stack[-1];
/* top is the last inserted value */

bool push(int);
int pop(void);
int peek(void);
void print(void);

int main(void)
{
	while(1)
	{
		printf("1.Push\n");
		printf("2:Pop\n");
		printf("3:Peek\n");
		printf("4:Print\n");
		printf("5:Quit\n");
		printf(">");
		int selected;
		scanf("%d",&selected);
		if(selected==1)
		{
			printf("Enter the Number to push\n=>");
			int topush;
			scanf("%d",&topush);
			push(topush);
		}
		else if(selected==2)
			printf("The Popped value is %d\n",pop());
		else if(selected==3)
			printf("The last value is %d\n",peek());
		else if(selected==4)
			print();
		else if(selected==5)
			exit(0);
	}		
}

bool push(int val)
{
	top++;
	//stack[top]=val;
	*top=val;
	return true;
}

int pop(void)
{
	int ret=*top;//stack[top];
	top--;
	return ret;
}
	
int peek(void)
{
	return *top;
}

void print(void)
{
	int *temp=top;
	while(1)
	{	
		if(top==&stack[-1])
		{
			for(int i=0;i<16;i++)printf("-");
			printf("\n");
			return;
		}
		else
		{
			printf("\t%d\n",*top);
			top--;
		}
	}
}

