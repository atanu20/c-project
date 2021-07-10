#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	char ch;
	
	FILE *fp;
	fp=fopen("source.c","r");
	if(fp==NULL)
	{
		printf("error!can not open file");
		exit(1);
	}
while(1)
{
	ch=fgetc(fp);
	if(ch==EOF)
	break;
	printf("%c",ch);
	
}
	
	fclose(fp);
	return 0;
}

