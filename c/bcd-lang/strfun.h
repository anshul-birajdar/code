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
	if(feof(stdin))
		return true;
	int c = getc(stdin);
	if (c == EOF)
		return true;
	ungetc(c, stdin);
	return false
}
