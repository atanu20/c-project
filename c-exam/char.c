//#include<stdio.h>
//int main()
//{
//	printf("\x61");
//}




//*********new sum ******
#include<stdio.h>
#include<conio.h>
int add(int, int);
main() {
int a,b,sum;
printf("enter two numbers:");
scanf("%d %d",&a,&b);
sum=add(a,b);
printf("%d\n",sum);

}

int add(int a,int b)
{
int s,c;
if (b == 0)
return a;
else
s = a^b;  
c = (a&b) << 1; 
return add(s,c); 
}
