#include<stdio.h>
#include<string.h>

int main()
{
	char s[10];
	int i=0,l=0;
	
	printf("enter string : ");
	gets(s);
	
	while(s[i]!='\0')
	{
		l++;
		i++;
	}
	for(i=l-1;i>=0;i--)
	{
		printf("%c",s[i]);
	}


//printf("length is %d",l);
return 0;

}
