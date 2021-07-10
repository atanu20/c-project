//#include<stdio.h>
//int main(void)
//{
//	int x,*p;
//	p=&x;
//	printf("enter number: ");
//	scanf("%d",&x);
//	printf("enter number is %d \n",*p);
//	printf("address is %u",p);
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h> 
int main() {
   int row = 2, col = 3,val;
   int *arr = (int *)malloc(row * col * sizeof(int)); 
   int i, j;
   for (i = 0; i < row; i++)
      for (j = 0; j < col; j++)
        {printf("enter  number: ");
        	scanf("%d",&val);
        	 *(arr + i*col + j) = val; 
		   }   
   printf("The matrix elements are:\n");
   for (i = 0; i < row; i++) {
      for (j = 0; j < col; j++) {
         printf("%d ", *(arr + i*col + j)); 
      }
      printf("\n");
   }
   free(arr); 
   return 0;
}
