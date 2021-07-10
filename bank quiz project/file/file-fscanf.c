#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	float n1;
	char a;
	char s[100];
	
	FILE *fp;
	fp=fopen("aj.txt","r");
	if(fp==NULL)
	{
		printf("error!can not open file");
		exit(1);
	}
fscanf(fp,"%d",&n);
fscanf(fp,"\n%c",&a);
fscanf(fp,"\n%s",s);
fscanf(fp,"\n%f",&n1);
printf("\n%d",n);
printf("\n%c",a);
printf("\n%s",s);
printf("\n%f",n1);
	
	fclose(fp);
	return 0;
}

