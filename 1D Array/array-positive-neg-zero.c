#include<stdio.h>
int main()
{
	int a[10],i,c=0,c1=0,c2=0;
	printf("enter ten numbers");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("positive and negative and zero ");
	for(i=0;i<10;i++)
	{
		if(a[i]>0)
		{
			c++;
		}
		else if (a[i]<0)
		{
			c1++;
		}
		else{
			c2++;
		}
			
		
	}
	printf("\n %d , %d ,%d",c,c1,c2);
	return 0;
	
	
}
