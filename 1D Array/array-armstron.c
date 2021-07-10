#include<stdio.h>
#include<math.h>
int main()
{int a[10],i,n,r,s=0,l=0;
	printf("enter array element");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		n=a[i];
		while(n!=0)
		{
			n=n/10;
			l++;
		}
	}
	for(i=0;i<10;i++)
	{
		n=a[i];
	
		s=0;
		while(n!=0)
		{
			r=n%10;
			s=s+pow(r,l);
			n=n/10;
			
			
		}
		if(s==a[i])
		{
			printf("%d is armstrong",a[i]);
		}
	}
	return 0;
	
}
