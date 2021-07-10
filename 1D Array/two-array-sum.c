#include<stdio.h>
int main()
{
	int a[10],b[10],c[10],i;
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
	printf("sum is");
	for(i=0;i<10;i++)
	{
		//c[i]=a[i]+b[i];
		printf("\n%d",a[i]+b[i]);
		
	}
	return 0;
}
