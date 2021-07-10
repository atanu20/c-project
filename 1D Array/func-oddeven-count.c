#include<stdio.h>

void sum(int []);
int main()
{
	int a[10],i,b[10];
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	sum(a);
		
	return 0;
}
void sum(int a[])
{int i,s=0,s1=0;
	printf("array elements in reverse");
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			s++;
		}
	else{
		s1++;
	}
		
	}
	printf("\n%d-%d",s,s1);
}
