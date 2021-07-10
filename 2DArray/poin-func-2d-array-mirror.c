#include<stdio.h>
void print(int *);
int main()
{
	int a[3][3],i,j;
	printf("enter array elements");
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


void print(int *p)
{
	int i,j;
	printf(" mirror array\n");
	for(i=0;i<3;i++)
	{
		for(j=2;j>=0;j--)
		{
			printf("%d\t",*(p+i*3+j));
		}
		printf("\n");
	}
	
	
}
