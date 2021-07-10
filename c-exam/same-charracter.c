#include<stdio.h>
#include<string.h>
void sort(char [] ,int);
int main()
{
	char a[10];
	gets(a);
	int i,j,l,max=-32768;
	l=strlen(a);
	char st[l];
	sort(a,l);
	for(i=0;i<l;i++)
	{st[i]=1;
		if(a[i]==a[i+1])
		{
			st[i]++;
			a[j]='0';
		}
	}
	//max=st[0];
	
	for(i=0;i<l;i++)
	{
		if(max<st[i])
		{
			max=st[i];
		}
	}
	printf("%c",a[max]);
	
}
void sort(char a[],int l)
{
	char t;
	int i,j;
	
	
	
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
	
}
