#include<stdio.h>
int main()
{
	int a[3][3],i,j,smin=32767,min=32766;
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
			if(a[i][j]<min)
			
			{
				smin=min;
				min=a[i][j];
			}
			if(a[i][j]<smin && a[i][j]!=min)
			smin=a[i][j];
			
			
		}
		
	}
	printf("\n minimum=%d,sminimum=%d",min,smin);
	return 0;
}


