#include<stdio.h>
#include<string.h>
void print(char [],char );
int main()
{
	char a[10],n;
	printf("enter string");
	gets(a);
	printf("enter search elements ");
	scanf("%c",&n);
	print(a,n);
	return 0;
}
void print(char a[],char n)
{
	int i,f=0;
	
	while(a[i]!='\0')
	{
		if(a[i]==n)
		{
			f=1;
			break;
		}
		i++;
		
	}
	if(f==1)
	{
		printf("found");
	}
	else{
		printf("not");
	}
}
