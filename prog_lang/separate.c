#include<stdio.h>
void separate(char *input,char *commands[][]);
int main(void)
{
	char input[1000];
	char commands[5][1000];
	printf("]");
	scanf("%[^\n]s",input);
	separate(input,&commands);
	for(int i=0;commands[i][0]!=-1;i++)
		printf("%s\n",commands[i]);
}
	
void separate(char *input,char *commands[][])
{
	int index,i;
	for(i=0;input[i]!='\0';i++)
	{
		if(input[i]==' ')
		{
			*(commands)[index][i]=-1;
			index++;
		}
		*(commands)[index][i]=input[i];
	}
	*(commands)[index][i]=NULL;
	*(commands)[index][i+1]=NULL;
	*(commands)[index+1]=NULL;
	return;
}

		

