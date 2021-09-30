int mnply_rand(int start,int end)
{
	srand(time(NULL));
	return rand()%(end-start)+start;
}
