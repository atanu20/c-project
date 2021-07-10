#include<stdio.h>
int main(void)
{
	int a,b,c=0,d=0;
	int *p1,*p2,*p3;
	float *q;
	
	p1=&a;
	p2=&b;
	p3=&c;
	q=&d;
	printf("enter two numbers: ");
	scanf("%d %d",&a,&b);
	*p3=*p1-*p2;
	printf("sub is %d\n",*p3);
	*p3=*p1 * *p2;
	printf("mul is %d\n",*p3);
	*q= (float)*p1 / *p2;
	printf("div is %0.2f\n",*q);
	
	return 0;
	
}
