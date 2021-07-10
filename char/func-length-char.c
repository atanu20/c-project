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
	while(a[i]!='\0')
	{
		l++;
		i++;
		
	}
	printf("length-%d",l);
}
