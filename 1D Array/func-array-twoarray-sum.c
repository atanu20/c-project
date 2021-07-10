#include<stdio.h>
void sum(int [],int []);
int main()
{
	int a[10],b[10],i;
	printf("enter first array elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter 2nd array elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	
	sum(a,b);
	
	return 0;
}
void sum(int a[],int b [])
{
	int i;
	printf("sum of two array");
	for(i=0;i<10;i++)
	{
		printf("\n%d",a[i]+b[i]);
	}
	
	
	
}
