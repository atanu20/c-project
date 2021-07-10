#include<stdio.h>

int main()
{
	int a[10],i,s=0,*p;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	for(i=0;i<10;i++)
		{
			
			s=s+*p;
			p++;
			
		}
	printf("sum is %d",s);
	return 0;
}

