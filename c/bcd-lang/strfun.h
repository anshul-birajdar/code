void bcd_rem_newline(char *line)
{
	char *c=line;
	while(1)
	{
		if(*c=='\n')
		{
			*c='\0';
			return;
		}
		else c++;
	}
}

