#include<stdio.h>
int main()
{
	int a[10],b[10],i,t;
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

	for(i=0;i<10;i++)
	{
		t=a[i];
		a[i]=b[i];
		b[i]=t;
	
		
	}
	printf("after swapping ");
	for(i=0;i<10;i++)
	{
	printf("\n%d-%d",a[i],b[i]);
		
	}
	
	return 0;
}
