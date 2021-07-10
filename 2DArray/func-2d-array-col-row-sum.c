#include<stdio.h>
void row(int [3][3]);
void col(int [3][3]);

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
	
	row(a);
	col(a);
	return 0;
	
}

void row(int a[3][3])
{
	int i,j,s=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			s=s+a[i][j];
		}
		printf("\nsum of %d row is %d",i+1,s);
		s=0;
		
	}
	
}


void col(int a[3][3])
{
	int i,j,c=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c=c+a[j][i];
		}
		printf("\nsum of %d col is %d",j+1,c);
		c=0;
		
	}
	
}
