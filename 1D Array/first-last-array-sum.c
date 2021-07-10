#include<stdio.h>
int main()
{int a[10],i;
	printf("enter array element");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]+a[9-i]);
	}
	return 0;
	
}
