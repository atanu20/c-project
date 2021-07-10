#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i;
	FILE *fp;
	fp=fopen("aj.txt","w");
	if(fp==NULL)
	{
		printf("error!can not open file");
		exit(0);
	}
	printf("enter number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d",n*i);
		fprintf(fp,"\n%d",n*i);
	}
	
	fclose(fp);
	return 0;
}

