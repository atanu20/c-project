#include<stdio.h>
int main()
{
	int a[10],i,c=0,c1=0;
	printf("enter ten numbers");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("odd even");
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			c++;
		}
		else {
			c1++;
		}
	}
	printf("\n %d , %d",c,c1);
	return 0;
	
	
}
