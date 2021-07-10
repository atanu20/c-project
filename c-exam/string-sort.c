#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],t;
	int i,j,l;
	gets(a);
	l=strlen(a);
	
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(a[j]<a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		
	}
	printf("%s",a);
}
