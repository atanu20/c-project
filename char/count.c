#include<stdio.h>
#include<string.h>

int main()
{
	char s[10],n;
	int i=0,f=0;
	
	printf("enter string : ");
	gets(s);
	printf("enter char : ");
scanf("%c",&n);
	
	while(s[i]!='\0')
	{
		if(s[i]==n)
		{
			f++;
		}
		
		i++;
	}



printf("count %d",f);
   return 0;

}
