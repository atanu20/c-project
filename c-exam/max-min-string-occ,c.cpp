/*#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[50];
	gets(string) ;
    int i, j,  max, length = strlen(string);  

    int freq[length];  
      
   
    for(i = 0; i < length; i++) {  
        freq[i] = 1;  
        for(j = i+1; j < length; j++) {  
            if(string[i] == string[j] && string[i] != ' ' && string[i] != '0') {  
                freq[i]++;  
                  
               
                string[j] = '0';  
            }  
        }  
    }  
      
    
     max = freq[0];  
    for(i = 0; i < length; i++) {
        
        
        if(max < freq[i]) {  
            max = freq[i];  

        }  
    }  
      
    if(2*max==length)
    {
    	printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	//printf("%c",string[max]);
          
    return 0;  
}*/



/*#include <stdio.h>  
#include <string.h>  
   
int main() 
{ int nu;
    scanf("%d",&nu);
    while(nu--)
    {
        char string[50];
	gets(string) ;
    int i, j,  max, length = strlen(string);  

    int freq[length];  
      
   
    for(i = 0; i < length; i++) {  
        freq[i] = 1;  
        for(j = i+1; j < length; j++) {  
            if(string[i] == string[j] && string[i] != ' ' && string[i] != '0') {  
                freq[i]++;  
                  
               
                string[j] = '0';  
                
            }  
        }  
    }  
      
    
     max = freq[0];  
    for(i = 0; i < length; i++) {
        
        
        if(max < freq[i]) {  
            max = freq[i];  

        }  
    }  
      
    if(max==(length-max))
	    printf("YES\n");
	    else
	    printf("NO\n");
	
          
     
}
return 0; 
    }*/
    
