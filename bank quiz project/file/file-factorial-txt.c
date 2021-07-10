#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,f=1;
	FILE *fp;
	fp=fopen("aj.txt","w");
	if(fp==NULL)
	{
		printf("error!can not open file");
		exit(1);
	}

printf("enter a number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	f=f*i;
	
}
	fprintf(fp,"%d",f);
	fclose(fp);
	return 0;
}

