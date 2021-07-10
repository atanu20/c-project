#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],i,b[10],t[10];
	printf("enter first string");
	gets(a);
		printf("enter 2nd  string");
	gets(b);
	strcpy(t,a);
	strcpy(a,b);
	strcpy(b,t);
	
	printf("first string is %s\n",a);
	printf("2nd string is  %s",b);
	

	return 0;
	
	
}
