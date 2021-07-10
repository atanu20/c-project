#include<stdio.h>
#include<string.h>

int main()
{
	char s[10];
	int i=0,c=0,c1=0,c2=0,c4=0;
	
	printf("enter string : ");
	gets(s);
	
	while(s[i]!='\0')
	{
		if(s[i]>=65 && s[i]<=90)
		c++;
		else if(s[i]>=97 && s[i]<=122)
		c1++;
		else if(s[i]>=48 && s[i]<=57)
		c2++;
		else
		c4++;
		
		i++;
	}


printf("upper case is  %d \n lower case in %d \n digit number %d\n other %d",c,c1,c2,c4);
return 0;

}
