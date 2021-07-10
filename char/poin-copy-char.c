#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],*p,b[10],*q;
	int i,l=0;
	printf("enter string: ");
	gets(a);
	p=a;
	q=b;
	while(*p!='\0')
	{
		*q=*p;
		q++;
		p++;
	}
	*q='\0';
	printf("%s",b);
	return 0;
}
