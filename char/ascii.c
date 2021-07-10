#include<stdio.h>
int main()
{
	char a[10];int i=0;
	printf("enter string : ");
	gets(a);
	while(a[i]!='\0')
	{
		printf("%c->%d\n",a[i],a[i]);
		i++;
	}
	
	return 0;
	
	
}
