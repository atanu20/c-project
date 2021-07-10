#include<stdio.h>
#include<string.h>
void print(char *);
int main()
{
	char a[10];
	printf("enter string: ");
	gets(a);
	print(a);
	return 0;
	
}
void print(char *p)
{
	int i,l=0;
	while(*p!='\0')
	{
		l++;
		p++;
	}
	printf("len %d",l);
}
