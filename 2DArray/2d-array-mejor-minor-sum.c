#include<stdio.h>
int main()
{
	int a[3][3],i,j,s=0,s1=0;
	printf("enter number");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				s=s+a[i][j];
			}
			if(i+j==2)
			{
				s1=s1+a[i][j];
			}
		}
		
	}
	printf("\nmajor sum=%d,\nminor sum=%d",s,s1);
	return 0;
}
