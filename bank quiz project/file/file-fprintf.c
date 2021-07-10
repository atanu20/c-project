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
		exit(1);
	}
fprintf(fp,"%d",22);
fprintf(fp,"\n%c",'A');
fprintf(fp,"\n%s","atanu");
fprintf(fp,"\n%f",5.11f);
printf("stored succesfully");
	
	fclose(fp);
	return 0;
}

