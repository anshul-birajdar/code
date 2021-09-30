int mnply_rand(int start,int end)
{
	end++;
	srand(time(NULL));
	return rand()%(end-start)+start;
}
int mnply_rolldice()
{
	return mnply_rand(1,6);
}

int mnply_getint(char *message)
{
	int num;
	printf("%s",message);
	scanf("%d\n",&num);
	return num;
}
void mnply_getnames(int players,char ***pnames,int maxname)
{
        for(int i=0;i<players;i++)
        {
                (*pnames)[i]=malloc(maxname*sizeof(char));
		printf("Enter Name [%d] :",i+1);
                //fgets((*pnames)[i],maxname-1,stdin);
		scanf("%s",(*pnames)[0]);
        }
}
