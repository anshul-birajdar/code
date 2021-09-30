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

