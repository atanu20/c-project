#include<stdio.h>
int main()
{
	
	int n,b,i,r,s=0,s1=0,m;
	printf("enter digit of number");
	scanf("%d",&b);
	printf("enter %d digit  number",b);
	scanf("%d",&n);

for(m=n,i=0;m!=0;m=m/10,i++)
{
		r=m%10;
			if(i%2==0)
			{
				s=s+r;
			}
			else{
				s1=s1+r;
			}
	
}
	printf("even index digit sum %d  \nodd index digit sum%d\n",s,s1);

	return 0;
	
}
