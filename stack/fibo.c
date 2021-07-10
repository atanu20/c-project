#include<stdio.h>
int fibo(int );
int main()
{
	int n,i;
	int f;
	printf("entet number :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		f=fibo(i);
		if(f<50)
		printf("%d\n",f);
	}
	
	
}
int fibo(int n)
{
	if(n==0)
	return 0;
	
	else if(n==1)
	return 1;
	else
	return (fibo(n-1)+fibo(n-2));
	
}
