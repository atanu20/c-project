#include<stdio.h>
int sum(int [3][3]);
int main()
{
	int a[3][3],i,j,s;
	printf("enter arrray elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	s=sum(a);
	printf("sum is %d ",s);
	return 0;
	
}

int sum(int a[3][3])
{
	int i,j,s=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			s=s+a[i][j];
		}
		
	}
	return s;
}
