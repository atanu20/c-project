#include<stdio.h>
#include<math.h>
long int bin(long int);
int main()
{
	 long int n,c;
	//int c;
	printf("enter number: ");
	scanf("%d",&n);
	c=bin(n);
	printf("num %ld",c);
}
long int bin(long int n)
{
	static int i=-1;
	
	
	
	if(n == 0)
            return 0;
        else{
        i++;
        	return n % 10 *pow(2, i) + bin(n / 10);
        	
		}
    
	
	
	
}
