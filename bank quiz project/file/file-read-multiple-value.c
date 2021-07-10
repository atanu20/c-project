#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i;
	FILE *fp;
	fp=fopen("aj.txt","r");
	if(fp==NULL)
	{
		printf("error!can not open file");
		exit(0);
	}
	
	for(i=1;i<=10;i++)
	{
		fscanf(fp,"\n%d",&n);
		printf("\n%d",n);
	}
	
	fclose(fp);
	return 0;
}

