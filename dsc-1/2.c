#include<stdio.h>
int main(void)
{
	int a,b,c=0;
	int *p1,*p2,*p3;
	p1=&a;
	p2=&b;
	p3=&c;
	printf("enter two numbers: ");
	scanf("%d %d",&a,&b);
	*p3=*p1+*p2;
	printf("sum is %d",*p3);
	return 0;
	
}
