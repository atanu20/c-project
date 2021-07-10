#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
int main()
{
    char s[10000];
	int a[26]={0};
    gets(s);
    int m;
    int len=strlen(s);
    int i;
   
for(i=0;i<len;i++)
    {
        if(s[i]!=' ')
        {
             char mm=tolower(s[i]);
             m=mm-'a';
           a[m]=a[m]+1;
        }
    }
    int f=true;
for(i=0;i<26;i++)
{
    if(a[i]==0)
    {
        
        f=false;
        
    }
}
if(f==true)
{
    printf("pangram");
}
else{
    printf("not pangram");
}
return 0;
}

