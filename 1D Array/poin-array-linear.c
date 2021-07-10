#include<stdio.h>

int main()
{
	int a[10],i,n,*p,f=0;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	printf("enter search element");
	scanf("%d",&n);
	for(i=0;i<10;i++)
		{
			
			if(*p==n)
			{
				f=1;
				break;
			}
			p++;
		}
	if(f==1)
	{
		printf("number found");
	}
	else{
		printf("not found");
	}
	return 0;
}

