#include<stdio.h>
void swap(int * ,int *);
int main(void)
{
	int a,b;
	printf("enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("before swap %d %d \n",a,b);
	swap(&a,&b);
	printf("after swap %d %d ",a,b);
	return 0;
	
}
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
