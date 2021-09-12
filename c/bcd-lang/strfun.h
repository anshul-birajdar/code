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

bool bcd_getif_eof(char *line)
{
	char *c=line;
	while(*c!='\0')
		if(c==EOF)
			return true;
	return false;
}

