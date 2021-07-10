#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void sumrow(void);
void sumcol(void);

int i,j,r,c,*arr;
int main()
{
	printf("enter the row and column:\n");
	scanf("%d %d",&r,&c);
	arr= (int *)malloc(r*c*sizeof(int));
	 printf("Enter the values of the matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("[%d][%d]= ",i,j);
			scanf("%d", (arr+ i*c+j));
		}
		printf("\n");
	}
	sumrow();
	sumcol();
}
void disp(void)
{
	printf("The matrix is:");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ", *(arr+ i*c+j));
		}
		printf("\n");

	}
}


void sumrow(void)
{
	int sum=0;
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum+*(arr+i*c+j);
		}
		
		printf("sum of %d row is %d\n",i+1,sum);
		sum=0;

	}
	
}
void sumcol(void)
{
	int sum=0;
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum+*(arr+j*c+i);
		}
		printf("sum of %d row is %d\n",i+1,sum);
		sum=0;

	}
}


