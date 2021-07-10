#include<stdio.h>
int main()
{
	int a[3][3],i,j,n,m;
	printf("enter number");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("search element");
	scanf("%d",&n);
	printf("replace element");
	scanf("%d",&m);

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==n)
			{
			a[i][j]=m;
			}
		
			
			
		}
		
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",a[i][j]);
			}
		
				printf("\n");
			
		}
	
		
	
	
	return 0;
}
