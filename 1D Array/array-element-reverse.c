#include<stdio.h>
int main()
{int a[10],i,n,r,s=0;
	printf("enter array element");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		n=a[i];
		s=0;
		while(n>0)
		{
			r=n%10;
			s=s*10+r;
			n=n/10;
			
			
		}
			
		
	
		printf(" \n%d is a prime ",s);
	}
	return 0;
	
}
