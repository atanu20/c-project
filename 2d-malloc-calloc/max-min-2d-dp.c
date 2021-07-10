#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int i,j,y,z, r,c,*arr;

void input(void);
int max(void);
int min(void);
int main()
{

	printf("enter row and column of the first array: ");
	scanf("%d%d",&r,&c);
	arr= (int* ) malloc(r*c*sizeof(int));
	input();
	y= max();
	printf("the maximum value is: %d",y);
	z=min();
	printf("\nthe minimum value is: %d",z);
}
void input(void)
{
	printf("\nenter a matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    printf("arr[%d][%d]= ",i,j);
			scanf("%d", arr + i*c +j);
		}
		printf("\n");
	}
}
int max(void)
{
	int i,j,max=-32768;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(max< *(arr+ i*c +j))
				max= *(arr+ i*c +j) ;
		}
	}
	return max;
}
int min(void)
{
	int i,j,min=32767;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(min > *(arr+ i*c +j))
				min= *(arr+ i*c +j) ;
		}
	}
	return min;
}
