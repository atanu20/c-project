#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],*p,b[10],*q;
	int i,l=0;
	printf("enter string: ");
	gets(a);
		printf("enter 2nd string: ");
	gets(b);
	p=a;
	q=b;
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
	printf("con %s",a);
	return 0;
}
