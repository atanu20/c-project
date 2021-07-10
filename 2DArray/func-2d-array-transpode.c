#include<stdio.h>
void print(int [3][3]);
int main()
{
	int a[3][3],i,j;
	printf("enter arrray elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	print(a);
	return 0;
	
}

void print(int a[3][3])
{
	int i,j;
	printf(" transpose matrix is \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	
}
