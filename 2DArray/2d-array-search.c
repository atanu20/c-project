#include<stdio.h>
int main()
{
	int a[3][3],i,j,n,f=0;
	printf("enter number");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("search element");
	scanf("%d",&n);

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==n)
			{
				f=1;
				break;
			}
		
			
			
		}
		
	}
	if(f==1)
	{
		printf("number found");
	}
	else{
		printf("not found");
	}
	return 0;
}
