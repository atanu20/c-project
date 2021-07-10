#include<stdio.h>
#include<string.h>

int main()
{
	char s[10],s1[10];
	int i=0,f=0;
	printf("enter first string : ");
	gets(s);
printf("enter1  2nd string : ");
gets(s1);
while(s[i]!='\0' || s1[i]!='\0')
{
	if(s[i]!=s1[i])
	{
		f=1;
		break;
	}
	i++;
}

   if(f==0)
   {
   	printf("two string are same");
   }
   else{
   	printf("not same");
   }
   return 0;
}
