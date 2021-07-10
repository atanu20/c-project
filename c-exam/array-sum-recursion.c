#include<stdio.h>
int sum(int [],int );
int main()
{
	int a[10];
	int i;
	int n=10-1;
	int s;
	printf("enter numbers: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	s=sum(a,n);
	printf("sum %d",s);
	return 0;
}
int sum(int a[],int n)
{
	if(n==0)
	 return a[0];
	else
	return(a[n]+sum(a,n-1));
	
}
