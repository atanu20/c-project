#include<stdio.h>
int main()
{
	int a[3][3],i,j,n,k,f=0;
	printf("enter number");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}


	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			n=a[i][j];
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
		{
			printf(" \n%d is a prime ",n);
		}
			
			
		}
		
	}
	
	return 0;
}
