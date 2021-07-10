#include<stdio.h>
#include<string.h>
void print(char *,char *);
int main()
{
	char a[10],b[10];
	printf("enter string: ");
	gets(a);

	print(a,b);
	printf("copy %s ",b);
	return 0;
	
}
void print(char *p,char *q)
{
	int i;

while(*p!='\0')
{
	*q=*p;
	p++;
	q++;
}
*q='\0';


	
	
}
