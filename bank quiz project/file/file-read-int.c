#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	FILE *fp;
	fp=fopen("aj.txt","r");
	if(fp==NULL)
	{
		printf("error!can not open file");
		exit(1);
	}
fscanf(fp,"Number=%d",&n);
printf("number %d",n);
	
	fclose(fp);
	return 0;
}

