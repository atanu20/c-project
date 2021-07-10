#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[] = "grass is greener on the other side";  
    int i, j, min, max, length = strlen(string);  
    char minChar = string[0], maxChar = string[0];  
    int freq[length];  
      
    //Count each word in given string and store in array freq  
    for(i = 0; i < length; i++) {  
        freq[i] = 1;  
        for(j = i+1; j < length; j++) {  
            if(string[i] == string[j] && string[i] != ' ' && string[i] != '0') {  
                freq[i]++; 
				 
                  
                //Set string[j] to 0 to avoid printing visited character  
                //**string[j] = '0'; (ata use kora jay) 
            }  
        }  
    }  
      
    //Determine minimum and maximum occurring characters  
    min = max = freq[0];  
    for(i = 0; i < length; i++) {  
          
        //If min is greater than frequency of a character   
        //then, store frequency in min and corresponding character in minChar  
        if(min > freq[i] && freq[i] != '0') {  
            min = freq[i];  
            minChar = string[i];  
        }  
        //If max is less than frequency of a character   
        //then, store frequency in max and corresponding character in maxChar  
        if(max < freq[i]) {  
            max = freq[i];  
            maxChar = string[i];  
        }  
    }  
      
    printf("Minimum occurring character: %c\n", minChar);  
    printf("Maximum occurring character: %c", maxChar);  
          
    return 0;  
}  
