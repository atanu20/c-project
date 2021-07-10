#include <stdio.h>
#include <math.h>

int main(void) {
	int a,n1,n2;
	int max=-32768;
	int win;
	
	scanf("%d",&a);
	while(a--)
	{
	    scanf("%d  %d ",&n1,&n2);
	   
	    if(abs(n1-n2)>max)
	    {
	        max=abs(n1-n2);
	         if((n1-n2)>0)
	       {
	        win=1;
	       }
	    else{
	        win=2;
	        }
	    }
	    
	    
	    
	}
	
	printf("%d  %d  ",win,max);
	return 0;
}

