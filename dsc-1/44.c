#include<stdio.h>

void swap(int* , int* );
void swap(int *p1,int *q1)
{
    int t;
    t=*p1;
    *p1=*q1;
    *q1=t;
}

int main()
{
    int a,b;
    printf("enter two numbers to swap \n");
    scanf("%d%d",&a,&b);
    printf(" before swap a= %d ,b= %d ",a,b);

    swap(&a,&b);
    printf(" after swap a=%d,b=%d",a,b);
   return 0;
   
}


