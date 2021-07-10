#include<stdio.h>

void print(int []);
int main()
{
	int a[10],i;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	print(a);
	return 0;
}
void print(int a[])
{int i;
	printf("array elements are");
	for(i=0;i<10;i++)
	{
		printf("\n%d",a[i]);
	}
}
