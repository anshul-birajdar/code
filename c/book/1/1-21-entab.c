#include<stdio.h>
#define TABLEN 8
/* entab -- converts spaces into tabs
   and spaces (priority to tabs) */
/* bugs: does not space properly (yet) */
int main(void)
{
	char c,pc;
	c=pc='\0';
	int spac=0;
	int len=0;
	while((c=getchar())!=EOF) {
		if(pc==' '&&c!=' ') {
			//if(spac>TABLEN||spac>=TABLEN-(len%TABLEN)&&len%TABLEN>0)spac--;
			while((spac)>=TABLEN||(spac)>=(TABLEN-len%TABLEN)) {
				putchar('\t');
				spac-=TABLEN-(len%TABLEN);
				len+=TABLEN-(len%TABLEN);
			}
			for(int i=0;i<spac;i++) {
				putchar(' ');
				len++;
			}
			putchar(c);
			len++;
			spac=0;
			pc=c;
			continue;
		}	
		if(c==' ')spac++;
		if(c=='\n')spac=len=0;
		if(c!=' '&&c!='\t'){
			putchar(c);
			len++;
		}
		pc=c;
	}	
}

