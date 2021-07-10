
#include<stdio.h>


int main()
{
	int n=5;
	int a[5]={1,2,3,4,5};
	int b[3]={2,9,3};
	int k[5];
	int i,j,t=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i]==b[j])
			{
				k[t]=a[i];
				t++;
			}	
		}
	}
	printf("(");
	for(i=0;i<t;i++)
	printf(" %d ",k[i]);
	printf(")");
}


/*more efficient!!nicha*/



/*

int main()
{
int a[] = {1, 2, 3, 3, 4, 5, 5, 6}; 
    int b[] = {3, 3, 5}; 
      
    int n = sizeof(a)/sizeof(a[0]); 
    int m = sizeof(b)/sizeof(b[0]); 
    
    int i = 0, j = 0; 
      
    while (i < n && j < m)  
    { 
                  
        if (a[i] > b[j])  
        { 
            j++; 
        }  
                  
        else 
        if (b[j] > a[i])  
        { 
            i++; 
        }  
        else 
        { 
            // when both are equal 
            printf("%d ",a[i]);
            i++; 
            j++; 
        } 
    } 


}

*/



/*

one another

#include<stdio.h>

int main()
{
	int a[] = {1,3,5,4,3}; 
    int b[] = {1,3,3,5,4,7}; 
     int k[5] ;
    int n = sizeof(a)/sizeof(a[0]); 
    int m = sizeof(b)/sizeof(b[0]); 
    
    int i = 0, j = 0,l=0; 
      
    while (i < n && j < m) 
    {
    	
    	if(a[i]==b[j])
    	{
    		k[l]=a[i];
    		l++;
    		i++;
		}
		else{
			
			j++;
		}
    	
    	
	}
	
	
	
	printf("(");
	for(i=0;i<l;i++)
	printf(" %d ",k[i]);
	printf(")");
}


*/


