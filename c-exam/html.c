#include<stdio.h>
#include<conio.h>
#include<string.h>
void html(char *);
void html(char *s)
{
	
	int i;
	int j;
	int ind=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='<')
		{
			j=1;
			continue;
				
		}
		else if(s[i]=='>')
		{
			j=0;
			continue;
		}
		if(j==0)
		{
			s[ind]=s[i];
			ind++;
		}
	}
	s[ind]='\0';
	while(s[0]==' ')
	{
		//for(i=0;i<strlen(s);i++)
		for(i=0;s[i]!='\0';i++)
		s[i]=s[i+1];	
	}
	
}


int main()
{
	char s[]="<h1> <h2>   hello hi <h2> </h1> ";
	html(s);
	printf("%s",s);
	
}
