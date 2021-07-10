#include<stdio.h>
void maxmin(int [3][3]);

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
	
		
		maxmin(a);
	return 0;
	
}
void maxmin(int a[3][3])
{
	int i,j,max=-32768,min=32767;
   for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>max)
			max=a[i][j];
				if(a[i][j]<min)
			min=a[i][j];
		
			
		}
		
	}
	printf("\nmaximum is %d,minimum is %d",max,min);
	
}


