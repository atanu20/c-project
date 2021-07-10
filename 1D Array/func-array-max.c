#include<stdio.h>
int max(int []);
int main()
{
	int a[10],i,m;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	m=max(a);
	printf("maximum is %d",m);
	return 0;
}
int max(int a[10])
{
	int i,m=-32768;
	for(i=0;i<10;i++)
	{
		
		if(a[i]>m)
		{
			m=a[i];
		}
		
		
	}
	return m;
	
	
	
}
