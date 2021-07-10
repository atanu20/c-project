#include<stdio.h>
void print(int *,int *,int *);
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
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
	
	print(a,b,c);
	return 0;
	
	
}


void print(int *p,int *q,int *r)
{
	int i,j,k;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  *(r+i*3+j)=0;
		  
			for(k=0;k<3;k++)
			{
				*(r+i*3+j)=*(r+i*3+j)+*(p+i*3+k)* *(q+k*3+j);
				
			}
			
		}
		
	}
	
	printf(" multiplication of two  array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(r+i*3+j) );
		}
		printf("\n");
	}
	
	
}
