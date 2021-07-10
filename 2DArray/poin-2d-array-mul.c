#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,*p,*q,*r,k;
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
	r=&c[0][0];
	printf("  matrix multiplication\n");
	for(i=0;i<3;i++)
	{
		for(j=3;j>=0;j--)
		{
			*(r+i*3+j)=0;
			for(k=0;k<3;k++)
			{
				*(r+i*3+j)=*(r+i*3+j)+*(p+i*3+k) * *(q+k*3+j);
				
			}
			
		}
		
	}
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",*(r+i*3+j));
			
		}
		printf("\n");
	}
	
	return 0;
}
