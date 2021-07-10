#include<stdio.h>
int main()
{
	int i;
	long int a=123456789,b=123456789;
	for(i=0;i<b;i++)
	{
		a++;
	}
	printf("sum is =%ld",a);
}





//******************new *****

#include <stdio.h> 
  
int add(int x, int y) 
{ 
    return printf("%*c%*c", x, ' ', y, ' '); 
} 
  
// Driver code 
int main() 
{ 
    printf("Sum = %d", add(3, 4)); 
    return 0; 
} 
