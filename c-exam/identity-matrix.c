#include <stdio.h>
//In a square matrix if all the main diagonal elements are 1's and 
//all the remaining elements are 0's is called an Identity Matrix.

void main()
{
   int a[3][3];
   int r1,c1;
   int i, j, yn =1;
   int c=0,f=0;
       printf("\n\n Check whether a given matrix is an identity matrix :\n ");
       printf("-----------------------------------------------------------\n");   
  
   
	 printf("Input elements in the first matrix :\n");
       for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&a[i][j]);
            }
        }    
 	 printf("The matrix is :\n");
	 for(i=0;i<3;i++)
	 {
	   for(j=0;j<3 ;j++)
	     printf("% 4d",a[i][j]);
	    printf("\n");
	 }

    for(i=0; i<3; i++)
    {
     for(j=0; j<3; j++)
     {
    	 if(a[i][j]!=1 && a[j][i]!=0)
    	 {
    	 	f=1;
    	 	break;
		 }
	}
   }

   if(f == 0 )
	printf(" The matrix is an identity matrix.\n\n");
   else
	printf(" The matrix is not an identity matrix.\n\n");
}

