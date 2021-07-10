#include<stdio.h>
#include<string.h>
void print(char *,char *);
int main()
{
	char a[10],b[10];
	printf("enter string: ");
	gets(a);
	printf("enter string: ");
	gets(b);

	print(a,b);
	
	return 0;
	
}
void print(char *p,char *q)
{
	int i,f=0;

while(*p!='\0' || *q!='\0')
{
	if(*p!=*q)
	{
		f=1;
		break;
	}
	p++;
	q++;
}
if(f==0)
{
	printf("same");
}
else{
	printf("not");
}


	
	
}
