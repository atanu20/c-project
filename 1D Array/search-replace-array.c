#include<stdio.h>
int main()
{
	int a[10],i,n,m;
	printf("enter ten numbers");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("search a number");
	scanf("%d",&n);
	printf("replace a number");
	scanf("%d",&m);
	
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		{
			a[i]=m;
		}
	}
	for(i=0;i<10;i++)
	{
		printf("\n%d",a[i]);
	}
	
	
	return 0;
	
	
}
