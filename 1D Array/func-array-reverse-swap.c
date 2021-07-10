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
	for(i=0;i<10;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
void print(int a[])
{int i,t;
	printf("array elements in reverse");
	for(i=0;i<10;i++)
	{
		t=a[i];
		a[i]=a[9-i];
		a[9-i]=t;
	}
}
