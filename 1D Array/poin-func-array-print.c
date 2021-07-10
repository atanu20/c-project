#include<stdio.h>
void print(int *);
int main()
{
	int a[10],i,m;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	print(a);
	
	return 0;
}
void print(int *p)
{
	int i;
	printf("array elements are");
	for(i=0;i<10;i++)
	{
		
	printf("\n%d",*p);
		p++;
		
	}

	
	
	
}
