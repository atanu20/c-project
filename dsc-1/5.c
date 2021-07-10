#include<stdio.h>
int main(void)
{
	int x,f=1,*p;
	p=&f;
	int i;
	printf("enter number: ");
	scanf("%d",&x);
	for(i=1;i<=x;i++)
	{
		*p=(*p)*i;
	}
	printf("fact is %d",*p);
	return 0;
}
