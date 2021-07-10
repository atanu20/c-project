#include<stdio.h>

int main()
{
	int a[10],i,*p,b[10],*q;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("enter 2nd array elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	p=a;
	q=b;
	printf("two array sum");
	for(i=0;i<10;i++)
		{
			printf("\n %d",*p + *q);
			
		p++;
		q++;
		}

	return 0;
}

