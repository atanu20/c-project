#include<stdio.h>
int main()
{
	char a[10];
	int i;
	printf("enter string: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0'&& a[i]<='9')
		printf("%c\n",a[i]);
		
	}
	return 0;
}
