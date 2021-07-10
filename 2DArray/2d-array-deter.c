#include<stdio.h>
int main()
{
	int a[3][3],i,j,d=0;
	printf("enter number");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}

printf("array is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d  ",a[i][j]);
			
		}
		printf("\n");
		
	}
	
	for(i=0;i<3;i++)
	{
		d=d+(a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+2)%3]*a[2][(i+1)%3]));
	}
	printf("\ndeterminant is %d",d);
	
	return 0;
}
