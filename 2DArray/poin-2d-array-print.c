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
	
	p=&a[0];
	
	printf(" Array elements are\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",*p);
			p++;
		}
		printf("\n");
	}
	return 0;
}
