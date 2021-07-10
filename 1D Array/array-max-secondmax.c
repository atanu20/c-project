#include<stdio.h>
int main()
{
	int a[10],i,max=-32767,smax=-32768;
	printf("enter ten numbers");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("maximum and second maximum ");
	for(i=0;i<10;i++)
	{
	if(a[i]>max)
		{
			
			smax=max;
			max=a[i];
			
			
		}
     else if(a[i]>smax && a[i]!=max)
		{
			smax=a[i];
		}
		
	}
		printf("\n max= %d ,smax=%d",max,smax);
	return 0;
	
	
}
