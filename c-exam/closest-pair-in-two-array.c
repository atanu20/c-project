#include<stdio.h>
int main()
{
	int a[]={1, 4, 5, 7};
	int b[]={10, 20, 30, 40};
	int x=32;
	int max=-32768;
	int l,e;
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if((a[i]+b[j]-x >max) && (a[i]+b[j]<x))
				{
					max=a[i]+b[j]-x;
					l=i;
					e=j;
				}
		}
	}
	printf("%d-%d ",a[l],b[e]);
}
