#include<stdio.h>
#include<string.h>

int main()
{
	char s[10],s1[10];
	printf("enter first string : ");
	gets(s);
printf("enter1  2nd string : ");
gets(s1);
strcat(s," ");
strcat(s,s1);

printf("full string is %s",s);
}
