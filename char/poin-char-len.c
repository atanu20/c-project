#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],*p;
	int i,l=0;
	printf("enter string: ");
	gets(a);
	p=a;
	while(*p!='\0')
	{
		l++;
		p++;
	}
	printf("%d",l);
	return 0;
}
