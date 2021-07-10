#include<stdio.h>
int sum(int *);
int main()
{
	int a[10],i,m;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	m=sum(a);
	printf("sum is %d",m);
	return 0;
}
int sum(int *p)
{
	int i,s=0;
	for(i=0;i<10;i++)
	{
		
		s=s+*p;
		p++;
		
	}
	return s;
	
	
	
}
