#include<stdio.h>
int search(int *,int);
int main()
{
	int a[10],i,n,f;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter search element");
	scanf("%d",&n);
		f=search(a,n);
		if(f==1)
		{
			printf("number found");
		}
		else{
			printf("not found");
		}
	
	return 0;
}
int  search(int *p,int n)
{
	int i,f=0;

	for(i=0;i<10;i++)
	{
		
		if(*p==n){
			f=1;
			break;
		}
		p++;
	}
return f;
	
	
	
}
