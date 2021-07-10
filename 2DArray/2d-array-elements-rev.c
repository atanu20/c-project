#include<stdio.h>
int main()
{
	int a[3][3],i,j,n,r,s=0;
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
			s=0;
			while(n>0)
			{
				r=n%10;
				s=s*10+r;
				n=n/10;
			}
			
		
			printf(" \nreverse of %d is %d ",a[i][j],s);
		
			
			
		}
		
	}
	
	return 0;
}
