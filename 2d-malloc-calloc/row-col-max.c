#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int i,j, r,c,*arr;

void input(void);
void maxrow(void);
void maxcol(void);

int main()
{

	printf("enter row and column of the first array: ");
	scanf("%d%d",&r,&c);
	arr= (int* ) malloc(r*c*sizeof(int));

    if(arr==NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
else{

        input();
	maxrow();
	
	maxcol();
free(arr);

}



	
	
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
void maxrow(void)
{
	int i,j,max=-32768;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(max< *(arr+ i*c +j))
				max= *(arr+ i*c +j) ;
		}
		printf("row %d max is %d\n",i+1,max);
		max=-32768;
	}
	
}


void maxcol(void)
{
	int i,j,max=-32768;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(max< *(arr+ j*c +i))
				max= *(arr+ j*c +i) ;
		}
		printf("col %d max is %d\n",i+1,max);
		max=-32768;
	}
	
}


