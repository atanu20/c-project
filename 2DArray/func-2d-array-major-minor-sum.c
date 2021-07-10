#include<stdio.h>
int major(int [3][3]);
int minor(int [3][3]);
int main()
{
	int a[3][3],i,j,s,c;
	printf("enter arrray elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	s=major(a);
	printf(" \nMAJOR diagonal elements sum is %d ",s);
	c=minor(a);
	printf(" \nMINOR  diagonal elements sum is %d ",c);
	return 0;
	
}

int major(int a[3][3])
{
	int i,s=0;
	
	for(i=0;i<3;i++)
	{
		s=s+a[i][i];
		
	}
	return s;
}

int minor(int a[3][3])
{
	int i,c=0;
	
	for(i=0;i<3;i++)
	{
		c=c+a[i][2-i];
		
	}
	return c;
}
