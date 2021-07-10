#include <stdio.h>
#include <string.h>


int main()
{
    char src[20] = "ataanaat aak hello"; 
    char s[20];
    int lensrc = strlen(src); 
    
    
   int i,j,k;
   for(i=0;i<lensrc;i++)
   {
   		for(j=i+1;j<lensrc;j++)
   		{
   			if(src[i]==src[j])
   			{
   				for(k=j;k<lensrc;k++)
   				{
   					src[k]=src[k+1];
   					
   					
				}
				lensrc--;
				j--;
			}
		}
	   
   }
   
   for(i=0;i<lensrc;i++)
   {
   	printf("%c",src[i]);
   }
   
    return 0;
}




/*

#include <stdio.h>
#include <stdlib.h>
int main()
{
  float n;
  printf("Enter the no you want to round off: ");
  scanf("%f",&n);
  if (n>0)
  {
    n += 0.5;
  }else
  {
    n -= 0.5;
  }
  int roundedNo = (int)n;
  printf("The rounded no is: %d", roundedNo);
}


*/
