#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,*p,*q;
	printf("enter array elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("enter 2nd array elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
	p=&a[0][0];
	q=&b[0][0];
	printf("Addition of matrix\n");
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",*(p+i*3+j)+ *(q+i*3+j));
			
		}
		printf("\n");
	}
	printf("Subtraction of matrix\n");
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d \t",*(p+i*3+j)- *(q+i*3+j));
			
		}
		printf("\n");
	}
	
	return 0;
}
