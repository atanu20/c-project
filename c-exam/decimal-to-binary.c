
#include <stdio.h>
 
int convert(int);
 
int main()
{
    int n, c;
 
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    c = convert(n);
    printf("The binary  of %d is %d.\n", n, c);
 
    return 0;
}
 
int convert(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 2 + 10 * convert(n / 2));
    }
}
