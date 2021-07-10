#include <stdio.h>
#include <string.h>

/*are out put =atnt k heo*/
int main()
{
    char sr[20] = "ataanaat aak hello"; 
    
    int lensr = strlen(sr); 
    
    
   int i,j,k;
   for(i=0;i<lensr;i++)
   {
   		if(sr[i]==sr[i+1])
   			{
   				for(k=i+1;k<lensr;k++)
   				{
   					sr[k]=sr[k+1];
   					
   					
				}
				lensr--;
				i--;
				
					for(k=i+1;k<lensr;k++)
   				{
   					sr[k]=sr[k+1];
   					
   					
				}
				
				lensr--;
				i--;
					
			}
	   
   }
   
   for(i=0;i<lensr;i++)
   {
   	printf("%c",sr[i]);
   }
   
    return 0;
}


/*#include <stdio.h>
#include <string.h>


int main()
{
    char sr[20] = "ataanaat aak hello"; 
    
    int lensr = strlen(sr); 
    
    
   int i,j,k;
   for(i=0;i<lensr;i++)
   {
   		if(sr[i]==sr[i+1])
   			{
   				for(k=i+1;k<lensr;k++)
   				{
   					sr[k]=sr[k+1];
   					
   					
				}
				lensr--;
				i--;
			}
	   
   }
   
   for(i=0;i<lensr;i++)
   {
   	printf("%c",sr[i]);
   }
   
    return 0;
}

out put hoba=atanat ak helo


*/
