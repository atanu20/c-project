#include<stdio.h>
#include<string.h>
void print(char []);
int main()
{
	char a[10];
	printf("enter string");
	gets(a);
	print(a);
	return 0;
}
void print(char a[])
{
	int i,l=0;
for(i=0;a[i]!='\0';i++)
{
	printf("\n ascii-%d",a[i]);
}
	
}
