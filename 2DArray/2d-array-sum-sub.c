#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j;
	printf("enter first  array  element");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("enter 2nd array  element");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
printf("array sum\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			printf("%d ",a[i][j]+b[i][j]);
			
		}
		printf("\n");
		
	}
	
	return 0;
}
