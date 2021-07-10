#include<stdio.h>
#include<string.h>
void print(char []);
int main()
{
	char a[10];
	printf("enter string");
	gets(a);
	print(a);
	return 0;
}
void print(char a[])
{
	int i=0,l=0;
	while(a[i]!='\0')
	{
		if(a[i]=='a' ||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u' ||a[i]=='A' ||a[i]=='E' ||a[i]=='I' ||a[i]=='O' ||a[i]=='U'  )
		{
			l++;
		}
		i++;
		
	}
	printf("vowel-%d",l);
}
