#include<stdio.h>
int main()
{
	int a[10],i,min=32766,smin=32767;
	printf("enter ten numbers");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("min and second min ");
	for(i=0;i<10;i++)
	{
	if(a[i]<min)
		{
			
			smin=min;
			min=a[i];
			
			
		}
     else if(a[i]<smin && a[i]!=min)
		{
			smin=a[i];
		}
		
	}
		printf("\n min= %d ,smin=%d",min,smin);
	return 0;
	
	
}
