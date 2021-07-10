#include<stdio.h>
int main()
{
	int a[3][3],i,j,s=0,s1=0,s2=0;
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
			s++;
			else if(a[i][j]<0)
			s1++;
                      else
                    s2++;
			
			
		}
		
	}
	printf("\n positive sum=%d,negative sum=%d,zero=%d",s,s1,s2);
	return 0;
}
