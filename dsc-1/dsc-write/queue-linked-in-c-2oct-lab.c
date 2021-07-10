#include<stdio.h>
#include<stdlib.h>


typedef  struct queue{
	int x;
	struct queue *next;
	
}qu;

qu *head=NULL;
int ch;

void create_q(qu *);
void display_q(qu *);
void push_q(qu *);
void pop_q(qu *);


int main()
{
	while(1)
	{
		system("cls");
		printf("   Queue using linked list  \n");
		printf("\t1:Create stack\n");
		printf("\t2:Push\n");
		printf("\t3:Pop\n");
		printf("\t4:Display\n");
		printf("\t5:exit\n");
		
		printf("choose a option: ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				head=(qu *)malloc(sizeof(qu));
				printf("\nCreating a queue:");
				create_q(head);
				
				
				getch();
				break;
			case 2:
				
				push_q(head);
				 printf("push element successfully\n");
				
				getch();
				break;
			case 3:
			
				 pop_q(head);
				 printf("pop element successfully\n");
			
				getch();
				break;
				
			case 4:
				display_q(head);
				getch();
				break;
				
				
				
			default:
				printf("Invalid input\n");
				getch();
				exit(0);
				
		}	
		
		
	}
	
}



void create_q(qu *ptr)
{
	char ch;
	printf("\nEnter element: ");
	scanf("%d",&ptr->x);
	ptr->next=NULL;
	 printf("\n Press 'y' or 'Y' to continue:");
	 fflush(stdin);
    scanf("%c",&ch);
    if (ch=='y' || ch=='Y')
    {
    	ptr->next=(qu *)malloc(sizeof(qu));
    	 ptr=ptr->next;
        return create_q(ptr);
	}
	
	
}





void display_q(qu *ptr)
{
	if(ptr==NULL)
	{
		printf("Empty queue\n");
	}
	else{
		while(ptr!=NULL)
		{
			printf("%d->",ptr->x);
			ptr=ptr->next;
		}
		printf("NULL");
	}
}
void push_q(qu *ptr)
{
	qu *new1;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	
	new1=(qu *)malloc(sizeof(qu));
	printf("\nEnter new node: ");
	scanf("%d",&new1->x);
	new1->next=ptr->next;
	ptr->next=new1;
	
	
}
void pop_q(qu *ptr)
{
	qu *loc;
	if(ptr==NULL)
	{
		printf("queue is empty\n");
	}
	else{
		head=ptr->next;
		ptr->next=NULL;
		loc=ptr;
		free(loc);
	}
	
}








