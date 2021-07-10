#include <stdio.h>
#include <string.h>


int main()
{
    char src[] = "How are you"; //source string
    char pat[] = "are"; //pattern you want to find
    int lensrc = strlen(src); 
    int lenpat = strlen(pat); 
    
    int i=0,j=0;
    for(i=0;i<(lensrc-lenpat);i++)
    {
    	for(j=0;j<lenpat;j++)
    	{
    		if(src[i+j]!=pat[j])
    		break;
    		
		}
    	
    	if(lenpat==j)
    	{
    		printf("\n%d",i);
		}
	}
    return 0;
}
