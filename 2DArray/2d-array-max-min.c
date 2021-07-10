#include<stdio.h>
int main()
{
	int a[3][3],i,j,max=-32768,min=32767;
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
			if(a[i][j]>max)
			max=a[i][j];
				if(a[i][j]<min)
			min=a[i][j];
			
			
		}
		
	}
	printf("\n maximum=%d,minimum=%d",max,min);
	return 0;
}
