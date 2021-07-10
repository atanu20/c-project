#include<stdio.h>
#include<string.h>

int main()
{
	char a[30];
	char b[30];
	int i,l=0,j,pos=0;
	
	printf("enter string: ");
	gets(a);
	
	strrev(a);
	strcat(a," ");
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ' )
		{
			for(j=i;j>=pos;j--)
			{
				sprintf(b,"%c",a[j]);
				
				printf("%s",b);
				
			}
			pos=i+1;
			
		}
		
		
		
		
		
	}
	
	
	
	
	
}

