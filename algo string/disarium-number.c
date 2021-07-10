#include<stdio.h>
#include<conio.h>
#include<math.h>
int rev(int ,int);
int main()
{
	int n,l=0;
	int f;
	printf("enter number : ");
	scanf("%d",&n);
	while(n>0)
	{
			n/10;
		l++;
			
		
	}
	f=rev(n,l);
	if(f==n)
	{
		printf("disarium number");
	}
	else {
		printf("no disarium number");
	}
	
}
int rev(int n,int l)
{
	if(l==1)
	return n;
	else{
		return (pow(n%10,l)+ rev(n/10,l--));
	}
	
	
}
