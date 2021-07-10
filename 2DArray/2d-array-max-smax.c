#include<stdio.h>
int main()
{
	int a[3][3],i,j,smax=-32768,max=-32767;
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
			
			{
				smax=max;
				max=a[i][j];
			}
			if(a[i][j]>smax && a[i][j]!=max)
			smax=a[i][j];
			
			
		}
		
	}
	printf("\n maximum=%d,smaximum=%d",max,smax);
	return 0;
}
