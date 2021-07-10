/*#include<stdio.h>
int string(char []);
int main()
{
	char a[10];
	int i,f=1;
	printf("enter string: ");
	gets(a);
	int x;
	x=string(a);
	printf("%d\n",x);
	for(i=1;i<=x;i++)
	{
		f=f*i;
	}
	printf("%d\n",f);
	
	return 0;
}
int string(char a[])
{
	int i,x=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0'&& a[i]<='9')
		{
			x=x*10+a[i]-48;
			
		}
		else{
			
			break;
		}
		
	}
	return x;
}
*/




/*#include<stdio.h>
int main(int argc, char *argv[])
{
int a;
//argv[1]="-5vbb";
a=string(argv[1]);
printf("%d",a);

getch();
}

int string(char *a)
{

int i,x;
	for(i=0,x=0;a[i]!='\0';i++)
	
	{
		
		if(i==0 && a[i]=='-')
		(
		
			i++;
		)
		
		 if(a[i]>='0'&& a[i]<='9')
		{
			x=x*10+(a[i]-48);
			
		}
		else{
			
			break;
		}
		
	}
	if (a[0]=='-')
	x=-x;
	return x;


}*/


#include <stdio.h>

int main(int argc, char *argv[])
{
int a,b;
int i,s=0;
if(argc<2)
{
printf("please use \"prg_name value1 value2 ... \"\n");
//return -1;
}
 
for(i=1; i<argc; i++)
{
printf("arg[%2d]: %d\n",i,atoi(argv[i]));
s=s+atoi(argv[i]);
}
printf("\nsum is %d",s);

return 0;
}

