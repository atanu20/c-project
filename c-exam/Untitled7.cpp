#include<stdio.h>
int main()
{
	int a[7];
	int i;
	printf("enter number between 0 to 9: ");
	for(i=1;i<8;i++)
	{
		scanf("%d",&a[i]);
	}
	int s=0;
	int f=0,index;
	for(i=1;i<8;i++)
	{
		if(a[i]>=5  &&a[i]<=9)
		{
			f=1;
			index=i;
			break;
			
		}
	}
	
	if(f==1)
	{
		printf("midle element is %d of index %d",a[index],index);
	}
	else{
		printf("not found");
	}
}
