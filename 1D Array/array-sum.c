#include<stdio.h>
int main()
{
	int a[10],i,s=0;
	printf("enter ten numbers");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("total sum ");
	for(i=0;i<10;i++)
	{
		s=s+a[i];
	}
		printf("\nsum is %d",s);
	return 0;
	
	
}
