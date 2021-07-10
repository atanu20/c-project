#include<stdio.h>
#include<string.h>
void print(char *,char *);
int main()
{
	char a[10],b[10];
	printf("enter string: ");
	gets(a);
	printf("enter 2nd  string: ");
	gets(b);
	print(a,b);
	printf("%s ",a);
	return 0;
	
}
void print(char *p,char *q)
{
	int i;
	while(*p!='\0')
	{
	p++;
	}
while(*q!='\0')
{
	*p=*q;
	p++;
	q++;
}
*p='\0';


	
	
}
