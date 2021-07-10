#include <stdio.h>

int main()
{
   int a[]={10,22,28,29,30,40};
   
    int i,j;
    int x=54;
    int max=-32768;
    int st,en;
   for(i=0;i<6;i++)
   {
   	 for(j=i+1;j<6;j++)
   	 {
   	 	
   	 	if((a[i]+a[j]-x)>max  && (a[i]+a[j])<x)
   	 	{
   	 		max=(a[i]+a[j]-x);
   	 		st=i;
   	 		en=j;
			}
	}
   }
   printf("%d - %d",a[st],a[en]);
}
