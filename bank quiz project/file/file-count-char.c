#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	char ch;
	int c=0,c1=0;
	
	FILE *fp;
	fp=fopen("aj.txt","r");
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
	c++;
	if(ch==' ')
	c1++;
	
}
	printf("%d",c);
	printf("\nword %d",c1+1);
	fclose(fp);
	return 0;
}

