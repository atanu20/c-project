#include<stdio.h>
int main()
{
	int a[3][3],i,j,s=0;
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
			
				s=s+a[i][j];
			
		}
		
	}
	printf("\nsum=%d",s);
	return 0;
}
