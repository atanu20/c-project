#include<stdio.h>

void print(int [],int []);
int main()
{
	int a[10],i,b[10];
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	print(a,b);
		for(i=0;i<10;i++)
	{
		printf("\n%d",b[i]);
	}
	return 0;
}
void print(int a[],int b[])
{int i;
	printf("array elements in reverse");
	for(i=0;i<10;i++)
	{
		b[i]=a[9-i];
		
	}
}
