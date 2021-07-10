#include<stdio.h>
int main()
{
	int a[10],b[10],i;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
		for(i=0;i<10;i++)
	{
		b[i]=a[9-i];
		printf("\n%d",b[i]);
	}
	return 0;
}
