#include<stdio.h>
int main()
{int a[10],i,n,f=0,k;
	printf("enter array element");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		n=a[i];
		f=0;
		for(k=2;k<n;k++)
		{
			if(n%k==0)
			{
				f=1;
				break;
			}
			
		}
		if(f==0)
		printf(" \n%d is a prime ",n);//a[i]
	}
	return 0;
	
}
