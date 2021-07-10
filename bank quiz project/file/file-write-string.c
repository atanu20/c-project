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

	printf("enter string: ");
gets(ch);
//	for(i=0;ch[i]!='\0';i++)
//	{
//		fputc(ch[i],fp);
//	}
fputs(ch,fp);
	
	fclose(fp);
	return 0;
}

