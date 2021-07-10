#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int i,j, r1,c1,r2,c2, *a,*b, *sum, *sub ;

void input(void);
void input1(void);
void sum1(void);
void substract(void);
int main()
{
	
	up:
	printf("enter row and column of the first array: ");
	scanf("%d%d",&r1,&c1);
	printf("enter row and column of the second array: ");
	scanf("%d %d",&r2,&c2);
	if(r1==r2 && c1==c2)
	{
		a= (int *) malloc(r1*c1*sizeof(int));
		b= (int *)malloc(r2*c2*sizeof(int));
		input();
		input1();
		printf("\nresult of the sum:\n");
		sum1();
		printf("\nresult of the substraction:\n");
		substract();

	}
	else
	{
		
		printf("row and col not same \n");
		getch();
		system("cls");
		goto up;
	}
}
void input(void)
{
	printf("\nenter a matrix: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		    printf("arr[%d][%d]= ",i,j);
			scanf("%d", a + i*c1 +j);
		}
		printf("\n");
	}
}
void input1(void)
{
	printf("\nenter a matrix: \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
		    printf("arr[%d][%d]= ",i,j);
			scanf("%d", b+ i*c1 +j);
		}
		printf("\n");
	}
}
void sum1(void)
{
	//sum= (int *)malloc(r1*c1*sizeof(int));
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			//*(sum+ i*c1+j)= *(a+i*c1+j) + *(b+i*c1 +j);
			
			//printf("%d  ",*(sum+ i*c1+j));
			printf("%d  ",*(a+i*c1+j) + *(b+i*c1 +j));
		}
		printf("\n");
	}

}
void substract(void)
{
	//sub=(int *)malloc(r1*c1*sizeof(int));
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			//*(sub+ i*c1+j)= *(a+i*c1+j) - *(b+i*c1 +j);
			//printf("%d  ",*(sub+ i*c1+j));
			printf("%d  ",*(a+i*c1+j) - *(b+i*c1 +j));
		}
		printf("\n");
	}
}
