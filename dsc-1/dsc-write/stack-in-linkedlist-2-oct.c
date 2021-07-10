//stack implementation using linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
	int x;
	struct stack *next;
	
}st;

st *head=NULL;


void create_s(st *);
void display_s(st *);
void push_s(st *);
void pop_s(st *);


int main()
{
	int ch;
	
	
	while(1)
	{
		system("cls");
		printf("   Stack using linked list  \n");
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
				head=(st *)malloc(sizeof(st));
				printf("\nCreating a stack:");
				create_s(head);
				
				
				getch();
				break;
			case 2:
				
				push_s(head);
				 printf("push element successfully\n");
				
				getch();
				break;
			case 3:
			
				 pop_s(head);
				 printf("pop element successfully\n");
			
				getch();
				break;
				
			case 4:
				display_s(head);
				getch();
				break;
				
				
				
			default:
				printf("Invalid input\n");
				getch();
				exit(0);
				
		}	
		
		
	}
	
}


void create_s(st *ptr)
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
    	ptr->next=(st *)malloc(sizeof(st));
    	 ptr=ptr->next;
         create_s(ptr);
	}
	
	
}

void push_s(st *ptr)
{
	st *new_node;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	new_node=(st *)malloc(sizeof(st));
	printf("\nEnter new node: ");
	scanf("%d",&new_node->x);
	new_node->next=ptr->next;
	ptr->next=new_node;
	
}




void pop_s(st *ptr)
{
	st *ptr1;
	if(ptr==NULL)
     {
        printf("underflow\n");
        getch();
        return;
     }
     else if(ptr->next==NULL)
     {
         head=NULL;
         printf("underflow\n");
     }
    else{
    		ptr1=ptr->next;
		while(ptr1->next!=NULL)
		{
			ptr=ptr1;
			ptr1=ptr1->next;
		}
		ptr->next=ptr1->next;
		free(ptr1);
    	
	}
}





void display_s(st *ptr)
{
	if(head==NULL)
	{
		printf("Underflow\n");
	
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








































