#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	char ch[50];
	int i;
	
	
	FILE *fp;
	fp=fopen("aj.txt","w");
	if(fp==NULL)
	{
		printf("error!can not open file");
		exit(1);
	}

for(i=1;i<=5;i++)
{
	printf("enter %d line : ",i);
	gets(ch);
	fputs(ch,fp);
	fputs("\n",fp);
}
	
	fclose(fp);
	return 0;
}

