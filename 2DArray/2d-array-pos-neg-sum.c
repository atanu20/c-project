#include<stdio.h>
int main()
{
	int a[3][3],i,j,s=0,s1=0;
	printf("enter number");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>0)
			s=s+a[i][j];
			else if(a[i][j]<0)
			s1=s1+a[i][j];
			
			
		}
		
	}
	printf("\n even sum=%d,odd sum=%d",s,s1);
	return 0;
}
