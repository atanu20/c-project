#include<stdio.h>
int main()
{
	int a,b,c,i,n;
	scanf("%d %d",&a,&b);
	c=a+b;
	
	n=c;
	up:
	n++;
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		   goto up;
		   

		}
		
		
	}
	printf("%d",n-c);
}
