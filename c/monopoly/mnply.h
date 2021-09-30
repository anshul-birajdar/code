int mnply_rand(int start,int end)
{
	srand(time(NULL));
	return rand()%(end-start)+start;
}
int mnply_rolldice()
{
	return mnply_rand(1,6);
}

