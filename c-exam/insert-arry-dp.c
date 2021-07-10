#include <stdio.h>
#include <stdlib.h>
void insert(void);
int n, i, *ptr,*ptr1,pos,val;
int main()
{
    

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));
 
    
    if(ptr == NULL)                     
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    else{
    	printf("Enter elements: ");
    	
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr+i);
        
    }
    up:
    printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &pos);
   
   if(pos<=n)
   {
   	printf("Enter the value to insert\n");
   scanf("%d", &val);
   insert();
   }
   else{
   	printf("position is greater than number..\n");
   	goto up;
   }
 
   
   
    printf("after insert: \n");
    
    for(i = 0; i <=n; ++i)
    {
        //printf("%d\n", *(ptr + i));
        printf("%d\n", *(ptr+i));
        
    }
	}

    
  
    
    free(ptr);

    return 0;
}


void insert(void)
{
	for(i=n-1;i>=pos-1;i--)
	{
		*(ptr + i+1)=*(ptr+i);
		
		
	}
	*(ptr + pos-1)=val;
	
}


