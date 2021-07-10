#include<stdio.h>
int main()
{
	int a[3][4],i,j,*p;
	printf("enter array elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	p=&a[0][0];
	
	printf("  matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",*(p+i*4+j));
			
		}
		printf("\n");
	}
	
	printf(" transpose matrix\n");
	for(j=0;j<4;j++)
	{
		for(i=0;i<3;i++)
		{
			printf("%d ",*(p+i*4+j));
			
		}
		printf("\n");
	}
	return 0;
}
