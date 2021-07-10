#include<stdio.h>
int main()
{
	int a[8]={4,11,17,6,9,13,5,8};
	int i,j;
	for(i=0;i<7;i++)
	{
		for(j=i+1;j<8;j++)
		{
			if ( a[i]%2==0 && a[j]%2==0)
			{
				printf("(%d  %d )",a[i],a[j]);
				
			break;
			}
			else if ( a[i]%2!=0 && a[j]%2!=0)
			{
				printf("(%d  %d )",a[i],a[j]);
			
				break;
			}
		}
	}
	
	
}
