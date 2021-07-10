#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
    int r = 3, c = 4,n; 
    int *arr;
	arr = (int *)malloc(r * c * sizeof(int)); 
  
    int i, j, count = 0; 
    for (i = 0; i <  r; i++) 
    {
    	for (j = 0; j < c; j++)
	  {
	  	scanf("%d", &n);
	  	*(arr + i*c + j)=n;
	   } 
	   printf("\n");
	}
      
      
          
  
    for (i = 0; i <  r; i++) 
      for (j = 0; j < c; j++) 
         printf("%d ", *(arr + i*c + j) ); 
  
   
    
   return 0; 
} 

/*
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int r = 3, c = 4, n,i, j, count;
 
    int *arr[r];
    for (i=0; i<r; i++)
         arr[i] = (int *)malloc(c * sizeof(int));
 
    
    
    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
      {
      	scanf("%d",&n);
      	 arr[i][j] = n; 
	  }
        
 
    for (i = 0; i <  r; i++)
      for (j = 0; j < c; j++)
         printf("%d ", arr[i][j]);
 
    
 
   return 0;
}
*/
