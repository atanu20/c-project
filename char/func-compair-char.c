#include<stdio.h>
#include<string.h>
void print(char [],char []);
int main()
{
	char a[10],b[10];
	printf("enter string : ");
	gets(a);
	printf("enter 2nd  string : ");
	gets(b);
	print(a,b);
	return 0;
}
void print(char a[],char b[])
{
	int i=0,f=0;
while(a[i]!='\0' || b[i]!='\0')
{
	if(a[i]!=b[i])
	{
		f=1;
		break;
	}
	i++;
}
	if(f==0)
	{
		printf("same");
	}
	else{
		printf("not same");
	}
}
