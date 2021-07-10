#include<stdio.h>
#include<string.h>

int main()
{
	char s[10],s1[10];
	int i=0;
	printf("enter first string : ");
	gets(s);
while(s[i]!='\0')
{
	s1[i]=s[i];
	i++;
}
s1[i]='\0';

printf("copy string is %s",s1);

return 0;
}
