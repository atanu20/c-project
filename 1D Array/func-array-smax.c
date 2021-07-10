#include<stdio.h>
void smax(int []);
int main()
{
	int a[10],i,m;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	smax(a);
	
	return 0;
}
void  smax(int a[10])
{
	int i,m=-32767,n=-32768;
	for(i=0;i<10;i++)
	{
		
		if(a[i]>m)
		{
			n=m;
			m=a[i];
		}
     if(a[i]>n && a[i] !=m)
		{
			
			n=a[i];
		}
		
		
	}
	printf(" max=%d, smax=%d",m,n);
	
	
	
}
