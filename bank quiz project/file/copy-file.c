#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	char ch;
	int i;
	
	
	FILE *fp,*fq;
	fp=fopen("aj.txt","r");
	fq=fopen("aj1.txt","w");
	if(fp==NULL || fq==NULL)
	{
		printf("error!can not open file");
		exit(1);
	}
	
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
		break;
		fputc(ch,fq);
	}

	
	fclose(fp);
	fclose(fq);
	return 0;
}

