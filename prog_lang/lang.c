#include<stdio.h>
#define MAXBUF 1000
int main(void)
{
	char buf[MAXBUF];
	scanf("%[^\n]s",buf);
	char commands[2][MAXBUF];
	int index=0;
	int loc=0;
	int bufloc=0;
	while(1)
	{
		if(buf[bufloc]==' ')
		{
			loc++;
			bufloc=0;
			index++;
			continue;
		}
		if(buf[bufloc]=='\0')break;
		commands[index][loc]=buf[bufloc];
		loc++;
		bufloc++;
	}
	printf("%s\n%s\n",commands[0],commands[1]);
}
	
	
	
