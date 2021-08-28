#include<stdio.h>
void separate(char *input,char ***commands);
int main(void)
{
	char input[1000];
	char commands[5][1000];
	char ***pcommands=&commands;
	printf("]");
	//scanf("%[^\n]s",input);
	gets(input);
	separate(input,pcommands);
	for(int i=0;commands[i][0]!=-1;i++)
		printf("%s\n",commands[i]);
}
	
void separate(char *input,char ***commands)
{
	int index,i;
	index=0;
	for(i=0;input[i]!='\0';i++)
	{
		if(input[i]==' ')
		{
			*(commands)[index][i]='\0';
			index++;
			continue;
		}
		*(commands)[index][i]=input[i];
	}
	*(commands)[index][i]='\0';
	*(commands)[index][i+1]='\0';
	//*(commands)[index+1]=NULL;
	return;
}

		

