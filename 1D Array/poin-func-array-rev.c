#include<stdio.h>
void rev(int *);
int main()
{
	int a[10],i,m;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	rev(a);
	
	return 0;
}
void rev(int *p)
{
	int i;
	printf("array elements in reverse");
	for(i=9;i>=0;i--)
	{
		
	printf("\n%d",*(p+i));
	
		
	}

	
	
	
}
