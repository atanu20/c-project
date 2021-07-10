#include<stdio.h>
void max(int *);
int main()
{
	int a[10],i,m;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	 max(a);
	
	return 0;
}
void max(int *p)
{
	int i,m=-32768,mi=32767;
	
	for(i=0;i<10;i++)
	{
		if(*p>m)
		m=*p;
		
		if(*p<mi)
		mi=*p;
		
		p++;
	}
	printf(" max is  %d ,min is  %d",m,mi);
	
	
	
}
