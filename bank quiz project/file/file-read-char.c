#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	//char ch;
	
	FILE *fp;
	fp=fopen("aj.txt","r");
	if(fp==NULL)
	{
		printf("error!can not open file");
		exit(1);
	}
//while(1)
//{
//	ch=fgetc(fp);
//	if(ch==EOF)
//	break;
//	printf("%c",ch);
//	
//}
/*while(!feof(fp))
{
	ch=fgetc(fp);
	printf("%c",ch);
}*/

char ch[50];
fgets(ch,50,fp);
printf("\n%s",ch);
	
	fclose(fp);
	return 0;
}

