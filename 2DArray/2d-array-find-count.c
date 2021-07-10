#include<stdio.h>
int main()
{
	int a[3][3],i,j,n,c=0;
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

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==n)
			{
				c++;
			}
		
			
			
		}
		
	}
	printf("count is %d",c);
	return 0;
}
