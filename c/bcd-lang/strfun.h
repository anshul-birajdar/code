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
	/*
	int c=getc(stdin);
	if (c==EOF)
		return true;
	ungetc(c,stdin);
	return false;
	*/
}

void bcd_getline(char *line,int maxline)
{
		char c;
                printf("INPUT>");
                fgets(line,maxline,stdin);
                bcd_rem_newline(line);
                if(line==NULL)
                        continue;
                if(bcd_getif_eof(line))
                        exit(EXIT_SUCCESS);
                return;
}

