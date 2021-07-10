#include<stdio.h>
int main(int argc, char *argv[])
{
int a;
argv[1]="-5vbb";
a=string(argv[1]);
printf("%d",a);

getch();
}

int string(char *a)
{

int i,x;
	for(i=0,x=0;a[i];i++)
	
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


}
