#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	char ch;
	int i;
	
	
	FILE *fp,*fq;
	fp=fopen("aj.txt","a");
	fq=fopen("aj1.txt","r");
	if(fp==NULL || fq==NULL)
	{
		printf("error!can not open file");
		exit(1);
	}
	
	while(1)
	{
		ch=fgetc(fq);
		if(ch==EOF)
		break;
		fputc(ch,fp);
	}

	
	fclose(fp);
	fclose(fq);
	return 0;
}

