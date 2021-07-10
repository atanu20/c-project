#include<stdio.h>
int main()
{
	int a[10],i;
	printf("enter ten numbers");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("entered numbers are");
	for(i=0;i<10;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
	
	
}
