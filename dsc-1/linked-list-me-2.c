#include<stdio.h>
#include<stdlib.h>
#include<conio.h>




typedef struct node{
	char a[50];
	int no;
	struct node *link;
}l;

void creat(l *);
void display(l *);


l *head;
int ch;

int main()
{
	while(1)
	{
		system("cls");
		printf("\n\t\tStudent details: ");
	printf("\n\t\t1.Create list: ");
	printf("\n\t\t2.Display list: ");
	printf("\n\t\t3.Exit: ");
	printf("\n\t\tenter choice :");
	scanf("%d",&ch);
	
		switch(ch)
	  {
		case 1:
			head=(l *)malloc(sizeof(l));
			creat(head);
			getch();
			break;
		case 2:
			display(head);
			getch();
			break;
		
		default:
			{
				printf("INVALID INPUT\n");
			exit(0);
			}
      }
	}
	
}
void creat(l *ptr)
{
        char ch;

        printf("Enter Name:\n");
        fflush(stdin);
        gets(ptr->a);
        printf("Enter rollNo:\n");
        scanf("%d",&ptr->no);
        ptr->link=NULL;

        printf("Do you want to continue?\n");
        
        scanf(" %c",&ch);
fflush(stdin);
        

        if((ch=='y') || (ch=='Y'))
        {
            ptr->link=(l *)malloc(sizeof(l));
            ptr=ptr->link;
            return (creat(ptr));
        }
}



void display(l *ptr)
{
    while (ptr!=NULL)
    {
        scanf("%s",ptr->a);
        printf("%d->",ptr->no);
        ptr=ptr->link;
    }
    printf("NULL");

}

