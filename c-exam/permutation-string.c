#include<stdio.h>  
#include<string.h>  
//Declaring generatePermutation()  
void generatePermutation(char * , int , int );  
  
int main()  
{  
  char str[] = "ABC";  
  int n =strlen(str);  
  printf("All the permutations of the string are: \n");  
  generatePermutation(str,0,n);  
}  
  
//Function for generating different permutation of the string.  
void generatePermutation(char *str,const int start, int end)  
{  
  char temp;  
  int i,j;  
  for(i = start; i < end; ++i){  
  for(j = i+1; j < end; ++j)  
  {  
   //Swapping the string by fixing a character  
    temp = str[i];  
  str[i] = str[j];  
    str[j] = temp;  
     //Recursively calling function generatePermutation() for rest of the characters  
  generatePermutation(str , i+1 ,end);  
    //Backtracking and swapping the characters again  
    temp = str[i];  
    str[i] = str[j];  
    str[j] = temp; 
    
  }  
  }  
  //Print the permutations  
  printf("%s\n",str);  
}  
