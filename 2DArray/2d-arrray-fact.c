#include<stdio.h>
int main()
{
	int a[3][3],i,j,k,n,f=1;
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
			f=1;
			for(k=1;k<=n;k++)
			{
				f=f*k;
				
			}
		
			printf("\nfactorial of %d is %d",a[i][j],f);
		
			
			
		}
		
	}
	
	return 0;
}
