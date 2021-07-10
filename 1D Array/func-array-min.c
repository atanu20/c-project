#include<stdio.h>
int min(int []);
int main()
{
	int a[10],i,m;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	m=min(a);
	printf("minimum is %d",m);
	return 0;
}
int min(int a[10])
{
	int i,m=32767;
	for(i=0;i<10;i++)
	{
		
		if(a[i]<m)
		{
			m=a[i];
		}
		
		
	}
	return m;
	
	
	
}
