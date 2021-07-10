#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <time.h>
int ch;
int you,computer;
int main()
{
	while(1)
	{
			
			system("cls");
		setup();
	logic();
	printf("\nPress Y to continue again:");
	getch();
	}
	
	
	return 0;
	
}
int  manu()
{
	printf("\nROCK PAPER SCISSOR\n");
	printf("\n1:choose rock");
	printf("\n2:choose paper");
	printf("\n3:choose scissor");
	printf("\n4:for exit\n");
	printf("\nselect one choice");
	scanf("%d",&ch);
	
	return (ch);
	
}
void setup()
{//time_t t;
	label1:
	//	srand((unsigned) time(&t));
	computer=rand()%4;
	if(computer==0)
	goto label1;
	you=manu();
	
}

void logic()
{
	switch(you)
	{
		case 1:
			if( computer==1)
			{
				printf("Draw Game\n");
				printf("you=Rock\n");
				printf("Computer=Rock");
			}
			else if( computer==2)
			{
				printf("computer win \n");
				printf("you=Rock\n");
				printf("Computer=paper");
				
			}
			else{
				printf("you win \n");
				printf("you=Rock\n");
				printf("Computer=scissor");
			}
			break;
		case 2:
			if( computer==1)
			{
				printf("you win\n");
				printf("you=paper\n");
				printf("Computer=Rock");
			}
			else if( computer==2)
			{
				printf("Draw Game \n");
				printf("you=paper\n");
				printf("Computer=paper");
				
			}
			else{
				printf("computer win \n");
				printf("you=paper\n");
				printf("Computer=scissor");
			}
			break;
		case 3:
			{
			
			if( computer==1)
			{
				printf("computer win\n");
				printf("you=scissor\n");
				printf("Computer=Rock");
			}
			else if( computer==3)
			{
			printf("game draw \n");
				printf("you=scissor\n");
				printf("Computer=scissor");
				
			}
			else{
					printf(" you win\n");
				printf("you=scissor\n");
				printf("Computer=paper");
				
			}
		}
			break;
		case 4:
			exit(0);
		default:
			{
			
			printf("Invalid input !!\n want to input again ?? press Y :\n");
			getch();
			system("cls");
		manu();
		}
	
	}
	
	
	
}
