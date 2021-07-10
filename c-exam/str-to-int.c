#include<Stdio.h>


int main(int argc ,char *argv[])
{
	int a;
	a=change(argv[1]);
	printf("%d",a);
	getch();
	
	
}
int change(char *str)
{
	int i,x;
	for(x=0,i=0;str[i]!='\0';i++)
	{
		if (i==0 && str[i]=='-')
		i++;
		if (str[i]>='0' &&  str[i]<='9')
		{
			x=x*10+(str[i]-48);
		}else {
			break;
		}
		
	}
	if(str[0]=='-')
	{
		x=-x;
		
	}
	return x;
}


/*

#include <stdio.h> 
  
int main() 
{ 
   printf("Current File :%s\n", __FILE__ ); 
   printf("Current Date :%s\n", __DATE__ ); 
   printf("Current Time :%s\n", __TIME__ ); 
   printf("Line Number :%d\n", __LINE__ ); 
   return 0; 
} 


*/
