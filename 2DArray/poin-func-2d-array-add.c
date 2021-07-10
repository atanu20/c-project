#include<stdio.h>
void print(int *,int *);
int main()
{
	int a[3][3],b[3][3],i,j;
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
	
	print(a,b);
	return 0;
	
	
}


void print(int *p,int *q)
{
	int i,j;
	printf(" Addition of two  array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(p+i*3+j)+ *(q+i*3+j) );
		}
		printf("\n");
	}
	
	
}
