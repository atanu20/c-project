#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,n1;
	FILE *fp;
	fp=fopen("aj.txt","r");
	if(fp==NULL)
	{
		printf("error!can not open file");
		exit(1);
	}

printf("enter a number: ");
scanf("%d",&n);
fscanf(fp,"%d",&n1);
if(n==n1)
{
	printf("number are same");
}
else{
	printf("not same");
}
	fclose(fp);
	return 0;
}

