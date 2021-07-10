#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	FILE *fp;
	fp=fopen("aj.txt","w");
	if(fp==NULL)
	{
		printf("error!can not open file");
		exit(0);
	}
	printf("enter number : ");
	scanf("%d",&n);
	fprintf(fp,"Number=%d",n);
	printf("number stored successfully");
	
	fclose(fp);
	return 0;
}

