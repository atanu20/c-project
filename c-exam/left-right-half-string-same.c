#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int i,j;
	int l=0;
	
	gets(a);
	l=strlen(a);
	if(l%2==0)
	{
		int f=1;


	i=0;
	j=l/2;
	    
	    
	    while(i<l/2 && j<l)
	    {
	    	if(a[i]!=a[j])
	    		{
	    			f=0;
	    			break;
	    			
				}
				else{
					i++;
					j++;
				}
		}
	    
	    if(f==0)
	  {
		printf("Not Lapindrome\n");
	   }
	else{
		printf("Lapindrome\n");
	  }
	}
	else{
		int f=1;


	i=0;
	j=(l/2)+1;
	    
	    
	    while(i<l/2 && j<l)
	    {
	    	if(a[i]!=a[j])
	    		{
	    			f=0;
	    			break;
	    			
				}
				else{
					i++;
					j++;
				}
		}
	    
	    if(f==0)
	  {
		printf("Not Lapindrome\n");
	   }
	else{
		printf("Lapindrome\n");
	  }
	}
	
	return 0;
}
