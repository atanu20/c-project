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
		if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='U' ||s[i]=='O' ||s[i]=='I' ||s[i]=='E' ||s[i]=='A'  )
		{
			c++;
		}
		else{
			c1++;
		}
		
		i++;
	}


printf("voule is  %d \n consonent is %d \n ",c,c1);
return 0;

}
