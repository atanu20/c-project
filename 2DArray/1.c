#include<stdio.h>
int main()
{
  char z[100];

  printf("Enter a string\n");
  gets(z);

  printf("The string: %s\n", z);
  return 0;
}
