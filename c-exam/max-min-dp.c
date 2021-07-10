#include <stdio.h>
#include <stdlib.h>
void maximum(void);
void minimum(void);

int n, i, *ptr, max=-32768,min=32767;
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
	printf("\nEnter elements: ");
    for(i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        
    }
	maximum();
	minimum();
}
    
    
    free(ptr);

    return 0;
}

void maximum()
{	
    for(i = 0; i < n; ++i)
    {
        if(*(ptr+i)>max)
        max=*(ptr+i);
        
    }
	printf(" \nmax is %d",max);
	
}

void minimum()
{
	for(i = 0; i < n; ++i)
    {
        if(*(ptr+i)<min)
        min=*(ptr+i);
        
    }
	printf(" \nmin is %d",min);
	
	
}


