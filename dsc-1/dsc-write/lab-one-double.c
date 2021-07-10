//implementation of DOUBLE LINKED LIST


#include<stdio.h>
#include<stdlib.h>

typedef struct doublelinklist
{
   int x;
   struct doublelinklist *next;
   struct doublelinklist *prev;
}dl;

void create(dl *);
void display(dl *);
void ins_end(dl *);
void del_aft(dl *);

dl *head;
char ch;
int ele;

int main()
{
   
   do
    {
     system("cls");
     printf("\n****MAIN MENU*****\n");
     printf("Operations in Double_Linked_List\n");
     printf("1\tCreate a list\n");
     printf("2\tDisplay the list\n");
     printf("3\tInsert at the end\n");
     printf("4\tDelete after any node\n");
      
     
     printf("5\tExit\n");
     printf("\nMake a choice:");
     scanf("%d",&ele);
     switch(ele)
     {
       case 1:
             printf("Create a Double linked list\n");
             head=(dl*)malloc(sizeof(dl));
             head->prev=NULL;
             create(head);
             getch();
             break;
       case 2:
             display(head);
             getch();
             break;

       case 3:
             ins_end(head);
              getch();
             break;

       
    	case 4:
    		del_aft(head);
    		getch();
    		break;
       default:
       	printf("Enter valid input");
       	getch();
             exit(0);
       
     }
   }while(1);

}

void create(dl *ptr)
{
    printf("Enter the number:");
    scanf("%d",&ptr->x);
    ptr->next=NULL;
    printf("Do you want to continue:");
    scanf(" %c",&ch);
    if(ch=='y'||ch=='Y')
    {
       ptr->next=(dl*)malloc(sizeof(dl));
       ptr->next->prev=ptr;
       ptr=ptr->next;
       create(ptr);
    }

}

void display(dl *ptr)
{
   
    if(ptr==NULL)
      printf("underflow\n"); //List is empty
    else
    {
      printf("double linked list\n");
      while(ptr->next!=NULL)
       {
         printf("%d->",ptr->x);
         ptr=ptr->next;
       }

      do
       {
         printf("%d->",ptr->x);
         ptr=ptr->prev;
       }while(ptr!=NULL);
       printf("NULL");
    }
}


void ins_end(dl *ptr)
{
    dl *new1;
    printf("Inserting element at the end");
    while(ptr->next!=NULL)
        ptr=ptr->next;
    new1=(dl*)malloc(sizeof(dl));
    printf("\nEnter the number:");
    scanf("%d",&new1->x);
    new1->next=ptr->next;
    new1->prev=ptr;
    ptr->next=new1;
}


void del_aft(dl *ptr)
{
    dl *node;
    printf("Enter the element after which you want to delete:");
    scanf("%d",&ele);
    if(ptr==NULL)
    {
        printf("List is empty");
        getch();
        return;
    }

    while(ptr!=NULL)
    {
      if(ptr->x==ele)
       {
        if(ptr->next==NULL)  
            printf("No element is present after  this element \n");
        else
         {
         node=ptr->next;
         if(node->next!=NULL) 
          node->next->prev=ptr;
         ptr->next=node->next;
         free(node);
         }
       }
      ptr=ptr->next;
    }
      printf("Element(s) deleted successfully");
      getch();
}
