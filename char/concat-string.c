#include<stdio.h>
#include<string.h>

int main()
{
	char s[10],s1[10];
	int i=0,l=0,j=0;
	printf("enter first string : ");
	gets(s);
		printf("enter 2nd string : ");
	gets(s1);
while(s[i]!='\0')
{
	l++;
	i++;
}
for(i=l,j=0;s1[j]!='\0';i++,j++)
{
	s[i]=s1[j];	
	
}
s[i]='\0';

printf("copy string is %s",s);

return 0;
}
