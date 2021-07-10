#include<stdio.h>

int main()
{
	int a[] = {1,2,3,}; 
    int b[] = {1,3,4,5,7}; 
     int u[10] ;
    int n = sizeof(a)/sizeof(a[0]); 
    int m = sizeof(b)/sizeof(b[0]); 
    
    int i = 0, j = 0,k=0; 
      
    while (i < n && j < m) 
    {
    	
    	if(a[i]<b[j]){
			u[k]=a[i];
			i++;
			k++;
		}
		else if(a[i]>b[j]){
			u[k]=b[j];
			j++;
			k++;
		}
		else{
			u[k]=a[i];
			i++;
			j++;
			k++;
		}
    	
    	
	}
	
	while(i<n)
	{
	 u[k++]=a[i++];
		
	}
	while(j<m)
	{
	u[k++]=b[j++];
		
	}
	
	printf("(");
	for(i=0;i<k;i++)
	{
		
		printf(" %d ",u[i]);
		
	}
	printf(")");
}
