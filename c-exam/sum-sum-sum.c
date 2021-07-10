#include<stdio.h>
int sum(int,int);

int main()
{
	
	int b,n;
	int s;
	
	scanf("%d %d",&b,&n);
	
	
	s=sum(b,n);
	printf("%d\n",s);
	return 0;
}
int sum(int b,int n)
{
	
	if(b==1)
	return (n*(n+1))/2;
	else
	{
		b--;
		return sum(b,(n*(n+1))/2);
	}
	
	
}

