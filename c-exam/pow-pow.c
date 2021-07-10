#include <stdio.h>
#include <math.h>
int main()
{
   int a[]={2,1,6};
   int b[]={1,5};
    int i=0,j=0;
   for(i=0;i<3;i++)
   {
   	 for(j=0;j<2;j++)
   	 {
   	 	if(pow(a[i],b[j])>pow(b[j],a[i]))
   	 	{
   	 		printf(" %d - %d  ",a[i],b[j]);
			}
		}
   }
}
