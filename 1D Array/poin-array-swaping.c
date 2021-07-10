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
	printf("two array swapping");
	for(i=0;i<10;i++)
		{
			*p=*p+*q;
			*q=*p-*q;
			*p=*p-*q;
		p++;
		q++;
		}
for(i=0;i<10;i++){
	printf("\n%d   %d",a[i],b[i]);
}
	return 0;
}

