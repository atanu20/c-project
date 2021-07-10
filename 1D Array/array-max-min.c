#include<stdio.h>
int main()
{
	int a[10],i,max=-32768,min=32767;
	printf("enter ten numbers");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("maximum and minimum ");
	for(i=0;i<10;i++)
	{
	if(a[i]>max)
		{
			max=a[i];
			
		}
   if(a[i]<min)
		{
			min=a[i];
		}
		
	}
		printf("\n max= %d ,min=%d",max,min);
	return 0;
	
	
}
