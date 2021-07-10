#include<stdio.h>

int main()
{
	int a[10],i,*p,b[10],*q;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
		
	p=a;
	q=b;
	printf("modify of array");
	for(i=0;i<10;i++)
		{
			*q=*p;
			p++;
			q++;
		}
		for(i=0;i<10;i++)
		{
			printf("\n%d",b[i]);
		}

	return 0;
}

