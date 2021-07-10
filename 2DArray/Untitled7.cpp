#include <stdio.h>

int max_of_four(int , int , int , int );
int main() {
    int a, b, c, d;
    printf("enter four numbers");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("\n max is %d", ans);
    
    return 0;
}
int max_of_four(int a, int b, int c, int d)
{

if((a>b && a>c)&&(a>d))
{
    return a;
}
else if((b>a && b>c)&&(b>d))
{
    return b;
}
else if((c>a && c>b)&&(c>d))
{
    return c;
}
else{
    return d;
}
}
