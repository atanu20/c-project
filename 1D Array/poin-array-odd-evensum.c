#include<stdio.h>

int main()
{
	int a[10],i,s=0,s1=0,*p;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	for(i=0;i<10;i++)
		{
			
			if(*p%2==0)
			{
				s=s+*p;
			}
			else{
				s1=s1+*p;
			}
			p++;
		}
	printf("odd sum is %d,even sum is %d",s1,s);
	return 0;
}

