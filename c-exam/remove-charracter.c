#include<stdio.h>
#include<string.h>

int main()
{
	char s[20]="abcdecf";
	char s1[20];
	int i,j=0;
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!='c')
		{
			s1[j]=s[i];
			j++;
		}
		
		
	}
	s1[j]='\0';
	printf("%s",s1);
	
}

/*#include<stdio.h>
#include<conio.h>
#include<string.h>
 
void del(char str[], char ch);
 
void main() {
   char str[10];
   char ch;
 
   printf("\nEnter the string : ");
   gets(str);
 
   printf("\nEnter character which you want to delete : ");
   scanf("%ch", &ch);
 
   del(str, ch);
   getch();
}
 
void del(char str[], char ch) {
   int i, j = 0;
   int size;
   char ch1;
   char str1[10];
 
   size = strlen(str);
 
   for (i = 0; i < size; i++) {
      if (str[i] != ch) {
         str1[j] = str[i];
          //= ch1;
         j++;
      }
   }
   str1[j] = '\0';
 
   printf("\ncorrected string is : %s", str1);
}*/
