#include<stdio.h>
int main()
{
	int a[10],i,n,c=0;
	printf("enter ten numbers");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("search a number");
	scanf("%d",&n);
	
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			c++;
		}
	}
	printf("count number is %d",c);
	
	return 0;
	
	
}
