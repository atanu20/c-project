#include<stdio.h>

void mul(int [3][3],int [3][3]);

int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("enter first arrray elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("enter 2nd arrray elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
		
	mul(a,b);
	
	return 0;
	
}
void mul(int a[3][3],int b[3][3])
{
	int i,j,c[3][3],k;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
				
			}
		
			
		}
		
	}
	
		printf("MULTIPLICATION OF TWO ARRAY IS\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
	
}

