#include<stdio.h>
void two(int *,int *);
int main()
{
	int a[10],b[10],i;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter 2nd array elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	
		two(a,b);
		
	
	return 0;
}
void  two(int *p,int *q)
{
	int i;
printf("two array sum");
	for(i=0;i<10;i++)
	{
		printf("\n%d",*p + *q);
		
		p++;
		q++;
	}

	
	
	
}
