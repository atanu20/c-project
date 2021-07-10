#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],*p;
	int i,c=0,c1=0,c2=0,c3=0;
	printf("enter string: ");
	gets(a);
	p=a;
	while(*p!='\0')
	{
		if(*p>=65 && *p<=90)
		{
			c++;
		}
		else if(*p>=97 && *p<=122)
		{
			c1++;
		}
		else if(*p>=48 && *p<=57)
		{
			c2++;
		}
		else c3++;
	p++;
	}
printf("%d -%d -%d -%d",c,c1,c2,c3);
	return 0;
}
