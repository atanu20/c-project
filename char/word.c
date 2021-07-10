#include<stdio.h>
#include<string.h>

int main()
{
	char s[50];
	int i=0,f=0;
	
	printf("enter string : ");
	gets(s);
	
	
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			f++;
			
		}
		
		i++;
	}



printf("word is %d",f+1);
printf("\nspace is %d",f);
   return 0;

}
