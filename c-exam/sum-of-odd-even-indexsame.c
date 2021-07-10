#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	int a=sum(n);
	if(a)
	{
		printf("yes");
	}
	else{
		printf("no");
	}
	//odd even index sum same(121):(1+1)=2;
}
int sum(n)
{
	return (n%11==0);
}
//int main() {
//   int n, r=0;
//   int diff =0;
//   int even=0;
//   int odd=0;
//  printf("enter a number");
//	scanf("%d",&n);
//   while(n != 0){
//      r = n%10;
//      if(r % 2 == 0) {
//         even+=r;
//      } else {
//         odd+=r;
//      }
//      n/=10;
//   }
//   diff=odd-even;
//    printf("%d",diff);
//   if(diff==0)
//   {
//   	printf("\nsum of odd even index is same");
//   }
//   else{
//   	printf("\nsum of odd even index not same");
//   }
//  
//   return 0;
//odd even index digit sum and differece
//}
