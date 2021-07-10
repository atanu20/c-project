#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a[10],b[10],i;
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
	
		swap(a,b);
		for(i=0;i<10;i++)
		printf("\n%d   %d",a[i],b[i]);
		
	
	return 0;
}
void  swap(int *p,int *q)
{
	int i;
printf("two array swap");
	for(i=0;i<10;i++)
	{
		
		*p=*p+*q;
		*q=*p-*q;
		*p=*p-*q;
		p++;
		q++;
	}

	
	
	
}
