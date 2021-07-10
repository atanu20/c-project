#include<stdio.h>
void add(int [3][3],int [3][3]);
void sub(int [3][3],int [3][3]);

int main()
{
	int a[3][3],b[3][3],i,j;
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
	
		
		add(a,b);
		sub(a,b);
	return 0;
	
}
void add(int a[3][3],int b[3][3])
{
	int i,j;
	printf("ADDITION OF TWO ARRAY IS\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]+b[i][j]);
			
		}
		printf("\n");
	}
	
}
void sub(int a[3][3],int b[3][3])
{
	int i,j;
	printf("SUBTRACTION OF TWO ARRAY IS\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]-b[i][j]);
			
		}
		printf("\n");
	}
	
}


