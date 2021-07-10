#include<stdio.h>
#include<string.h>

int main()
{
	char s1[20]="abc";
	char s2[20]="bca";
	char *p;
	
	int lens1=strlen(s1);
	int lens2=strlen(s2);
	
	strcat(s1,s1);
	
	
	if(lens1!=lens2)
	printf("not");
	else
	{
		p=strstr(s1,s2);
		
		
	}
	if(p!=NULL)
	{
		printf("string in rotate each other");
	}
	else{
		printf("not rotate");
	}
	
}
