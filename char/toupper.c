#include<stdio.h>
int main()
{
	char a[10],s[10];
	int i=0;
	printf("enter string: ");
	gets(a);
	while(a[i]!='\0')
	{
		s[i]=toupper(a[i]);
		i++;
		
	}
	
	printf("\n%s",s);
	
	return 0;
	
	
}
