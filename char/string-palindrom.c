#include<stdio.h>
#include<string.h>

int main()
{
	char s1[10],s2[10];

	printf("enter string  : ");
	gets(s1);
	strcpy(s2,s1);
	strrev(s2);
	if(!strcmp(s1,s2))
	 printf("palindrom");
	else
	printf("not palindrom");
	

}
