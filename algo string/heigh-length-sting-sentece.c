#include <stdio.h>
#include <string.h>
int main(void){
   char a[20]="this is goods boy";
   int b[10];
   int max=-32768;
   int k;
   int min=32767;
   
   int len=strlen(a);
   //strcat(a," ");
   int p,o,m;
   strcat(a," ");
   int i=0,j=0,c=0;
   for(i=0;i<len;i++)
   {c++;
        if(a[i]==' ')
           {
               b[j]=c-1;
               
               if(b[j]>max)
               max=b[j];
               if(b[j]<min && b[j]!='0')
               min=b[j];
               
               j++;
               c=0;
           }
      
   }
   for(i=0;i<len;i++)
   {
       for(j=0;j<max;j++)
       {
           if(a[j+i]==' ')
           {
               break;
               
           }
       }
       if(j==max)
       {for(k=i;k<i+max;k++)
           printf("%c",a[k]);
       }
       
   }
   printf("\n");
   printf("min %d\n",min);
   for(p=0;p<len;p++)
   {
       for(o=0;o<min;o++)
       {
           if(a[p+o]==' ')
           {
               break;
               
           }
       }
       if(o==min)
       {for(m=p;m<p+min;m++)
           printf("%c",a[m]);
       }
       
   }
   
}


/*
max string find in sentence

#include <stdio.h>
#include <string.h>
int main(void){
   char a[20]="this is a goods boy ";
   int b[10];
   int max=0;
   int k;
   int lo;
   int len=strlen(a);
   //strcat(a," ");
   //strcat(a," ");
   int i=0,j=0,c=0;
   for(i=0;i<len;i++)
   {c++;
        if(a[i]==' ')
           {
               b[j]=c-1;
               
               if(b[j]>max && max!='0')
               max=b[j];
               j++;
               c=0;
           }
      
   }
   for(i=0;i<len;i++)
   {
       for(j=0;j<max;j++)
       {
           if(a[j+i]==' ')
           {
               break;
               
           }
       }
       if(j==max)
       {for(k=i;k<i+max;k++)
           printf("%c",a[k]);
       }
       a[max]='\0';
   }
   
}



*/

