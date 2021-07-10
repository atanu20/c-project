#include<stdio.h>
#include<string.h>
void print(char [],char []);
int main()
{
	char a[10],b[10];
	printf("enter string : ");
	gets(a);
	print(a,b);
	return 0;
}
void print(char a[],char b[])
{
	int i=0;
	while(a[i]!='\0')
	{
		b[i]=a[i];
		i++;
		
	}
	b[i]='\0';
	printf("copy %s",b);
}
