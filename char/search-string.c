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
			f=1;
			break;
		}
		
		i++;
	}



if(f==1)
   {
   	printf("found char");
   }
   else{
   	printf("not found");
   }
   return 0;

}
