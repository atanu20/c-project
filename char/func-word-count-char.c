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
		if(a[i]==' ')
		{
			l++;
		}
		i++;
	}
	printf("word number %d",l+1);
	printf("\n space is %d",l);
}
