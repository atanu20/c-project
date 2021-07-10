#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],*p,b[10],*q;
	int i,f=0;
	printf("enter string: ");
	gets(a);
		printf("enter 2nd string: ");
	gets(b);
	p=a;
	q=b;
	while(*p!='\0'|| *q!='\0')
	{
		if(*p!=*q)
		{
			f=1;
			break;
		}
		p++;
		q++;
		
	}
	if(f==0)
	{
		printf("same string");
	}
	else{
		printf("not same");
	}
	return 0;
}
