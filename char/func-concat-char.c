#include<stdio.h>
#include<string.h>
void print(char [],char []);
int main()
{
	char a[10],b[10];
	printf("enter string : ");
	gets(a);
	printf("enter 2nd  string : ");
	gets(b);
	print(a,b);
	return 0;
}
void print(char a[],char b[])
{
	int i=0,j=0,l=0;
	while(a[i]!='\0')
	{
		l++;
		i++;
		
	}
	for(i=l,j=0;b[j]!='\0';i++,j++)
	{
		a[i]=b[j];
	}
	
	a[i]='\0';
	printf("concatination %s",a);
}
