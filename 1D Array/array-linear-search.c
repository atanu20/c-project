#include<stdio.h>
int main()
{
	int a[10],i,n,f=0;
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
			f=1;
			break;
		}
	}
	if(f==1)
	printf("number found");
	else
	printf("not found");
	
	
	return 0;
	
	
}
