#include<stdio.h>
#include<conio.h>

char a[9]={'1','2','3','4','5','6','7','8','9'};
char p,s;
int i,k;
int count=0;
void check(char ,char);
void check(char p,char s)
{
	for(i=0;i<9;i++)
	{
		if(a[i]==p)
		{
			a[i]=s;
		}
	}
	
	
}
void play()
{
	printf("choose your position and select symble\n");
	fflush(stdin);
	scanf("%c",&p);
	fflush(stdin);
	scanf("%c",&s);
	count++;
	check(p,s);
}
void input()
{
	printf("\nplayer 1 symble :X\n");
		printf("\nplayer 2 symble :O\n");
}

void name()
{
	printf("\n\t\t\tTIC TAC TOE\n");
}
void show()
{
	printf("\n\n\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c \n",a[0],a[1],a[2]);
	printf("\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c \n",a[3],a[4],a[5]);
	printf("\t\t\t---|---|---\n");
	printf("\t\t\t %c | %c | %c \n",a[6],a[7],a[8]);
	printf("\t\t\t---|---|---\n");
}
int end()
{
	
	if((a[0]=='x' && a[1]=='x' && a[2]=='x') || (a[0]=='x' && a[3]=='x' && a[6]=='x') || (a[0]=='x' && a[4]=='x' && a[8]=='x'))
	return 100;
	else if((a[0]=='o' && a[1]=='o' && a[2]=='o') || (a[0]=='o' && a[3]=='o' && a[6]=='o') || (a[0]=='o' && a[4]=='o' && a[8]=='o'))
	return 200;
	else if((a[1]=='x' && a[4]=='x' && a[7]=='x'))
	return 100;
	else if((a[1]=='o' && a[4]=='o' && a[7]=='o'))
	return 200;
	else if((a[2]=='x' && a[5]=='x' && a[8]=='x') || (a[2]=='x' && a[4]=='x' && a[6]=='x'))
	return 100;
	else if((a[2]=='o' && a[5]=='o' && a[8]=='o') || (a[2]=='o' && a[4]=='o' && a[6]=='o'))
	return 200;
	else if((a[3]=='x' && a[4]=='x' && a[5]=='x'))
	return 100;
	else if((a[3]=='o' && a[4]=='o' && a[5]=='o'))
	return 200;
	else if((a[6]=='x' && a[7]=='x' && a[8]=='x'))
	return 100;
	else if((a[6]=='o' && a[7]=='o' && a[8]=='o'))
	return 200;
	else{
		return 300;
	}
	
	
	
}
void main()
{
	char ca;
	label5:
	system("cls");
	name();
	show();
	input();
	play();
	label:
		system("cls");
	show();
	play();
	k=end();
	system("cls");
	show();
	if(count<9)
	{
	
			if(k==100)
			{
				count=0;
				printf("\n player 1 win\n");
			}
			else if(k==200)
			{
				count=0;
					printf("\n player 2 win\n");
			}
			else{
				goto label;
			}
			
		}
		else{
			printf("match draw");
			count=0;
			
		}
	
	printf("\nPress Y to continue again ,else N  : ");
	fflush(stdin);
  scanf("%c",&ca);  
  if(ca=='y' || ca=='Y')
  {
  	a[0]='1';
  	a[1]='2';
  	a[2]='3';
  	a[3]='4';
  	a[4]='5';
  	a[5]='6';
  	a[6]='7';
  	a[7]='8';
  	a[8]='9';
  	
  	goto label5;
  	
   } 
	
	return 0;
}
