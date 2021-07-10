#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
char password[10], username[10], ch,b[10];
int i, j;
pas:
printf("Email id : ");
gets(username);

printf("Password : ");
for(i = 0;i < 10;i++)
{
ch = getch();
if(ch == 13)
{
	break;
	
}

else if(ch==32 || ch==9)
continue;
else if(ch == 8)
{
system("cls");	
goto pas;
	
}


password[i] = ch;
ch = '*' ;
printf("%c ", ch);
}
password[i] = '\0';
/*printf("\nYour password is hacked : ");
for(j = 0;j < i;j++)
printf("%c ", password[j]);*/
printf("\nenter name");
gets(b);
return 0;
}
