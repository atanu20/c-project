#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct circular_dl
{
   int x;
   struct circular_dl *next;
   struct circular_dl *prev;
}cdl;

void create(cdl *);
void display(cdl *);
void ins_beg(cdl *);
void ins_aft(cdl *);
void ins_end(cdl *);
void del_beg(cdl *);
void del_aft(cdl *);
void del_end(cdl *);

cdl *head;
char ch;
int ele;

int main()
{
   up:
   do
    {
     system("cls");
     printf("\n****MAIN MENU*****\n");
     printf("Operations in Circular_Double_Linked_List\n");
     printf("1\tCreate a list\n");
     printf("2\tDisplay the list\n");
     printf("3\tInsert at beginning\n");
     printf("4\tInsert after any position\n");
     printf("5\tInsert at the end\n");
     printf("6\tDelete from beginning\n");
     printf("7\tDelete after any position\n");
     printf("8\tDelete from end\n");
     printf("9\tExit\n");
     printf("\nMake a choice:");
     scanf("%d",&ele);
     switch(ele)
     {
       case 1:
             printf("Create a circular linked list\n");
             head=(cdl*)malloc(sizeof(cdl));
             head->prev=head;
             create(head);
             break;
       case 2:
             display(head);
             getch();
             break;
       case 3:
             ins_beg(head);
             break;
       case 4:
             ins_aft(head);
             break;
       case 5:
             ins_end(head);
             break;
       case 6:
             del_beg(head);
             break;
       case 7:
             del_aft(head);
             break;
       case 8:
             del_end(head);
             break;
       case 9:
             exit(0);
       default: printf("Enter valid input");
              getch();
              goto up;
     }
   }while(1);

}

void create(cdl *ptr)
{
    printf("Enter the number:");
    scanf("%d",&ptr->x);
    ptr->next=head;
    printf("Do you want to add another node:");
    scanf(" %c",&ch);
    if(ch=='y'||ch=='Y')
    {
       ptr->next=(cdl*)malloc(sizeof(cdl));
       ptr->next->prev=ptr;
       ptr=ptr->next;
       create(ptr);
    }
}


void display(cdl *ptr)
{
    printf("Displaying the list\n");
    if(ptr==NULL)
      printf("List is empty");
    else
    {
      while(ptr->next!=head)
      {
        printf("%d->",ptr->x);
        ptr=ptr->next;
      }
      do
      {
        printf("%d->",ptr->x);
        ptr=ptr->prev;
      }while(ptr!=head);
     printf("%d->",ptr->x);
     printf("NULL");
    }
}

void ins_beg(cdl *ptr)
{
    cdl *new1;
    while(ptr->next!=head)
        ptr=ptr->next;
    printf("Inserting element in the beginning");
    new1=(cdl*)malloc(sizeof(cdl));
    printf("\nEnter the number:");
    scanf("%d",&new1->x);
    new1->prev=ptr->next;
    new1->next=head;
    ptr->next=new1;
    head->prev=new1;
    head=new1;
}

void ins_aft(cdl *ptr)
{
    cdl  *new1;
    printf("Inserting element after an element");
    printf("\nEnter the number after which you want to add:");
    scanf("%d",&ele);
    do
    {
     if(ptr->x==ele)
      {
        new1=(cdl*)malloc(sizeof(cdl));
        printf("Enter the number:");
        scanf("%d",&new1->x);
        new1->prev=ptr;
        new1->next=ptr->next;
        ptr->next->prev=new1;
        ptr->next=new1;
      }
     ptr=ptr->next;
    }while(ptr!=head);
}

void ins_end(cdl *ptr)
{
    cdl *new1;
    printf("Inserting element at the end");
    while(ptr->next!=head)
        ptr=ptr->next;
    new1=(cdl*)malloc(sizeof(cdl));
    printf("\nEnter the number:");
    scanf("%d",&new1->x);
    new1->next=ptr->next;
    new1->prev=ptr;
    ptr->next=new1;
    head->prev=new1;
}

void del_beg(cdl *ptr)
{
    cdl *ptr1=ptr;
    if(ptr==NULL)
     {
        printf("List is empty\n");
        getch();
        return;
     }
    else if(ptr->next==head) //for single element case
     {
        head=NULL;
        printf("List is empty\n");
     }
    else
     {
        while(ptr1->next!=head)
            ptr1=ptr1->next;
        head=ptr->next;
        head->prev=ptr1;
        ptr1->next=head;
        free(ptr);
     }
     printf("Element deleted successfully");
     getch();
}

void del_aft(cdl *ptr)
{
    cdl *node;
    printf("Enter the element after which you want to delete:");
    scanf("%d",&ele);
    if(ptr==NULL)
    {
        printf("List is empty");
        getch();
        return;
    }

    do
    {
      if(ptr->x==ele)
       {
            if(ptr->next==head) //to handle last element
                printf("No element  is present after the occurrence of this element at last positon\n");
            else
            {
            node=ptr->next;
            node->next->prev=ptr;
            ptr->next=node->next;
            free(node);
            }
        }
      ptr=ptr->next;
    }while(ptr!=head);
      printf("Element(s) deleted successfully");
      getch();
}

void del_end(cdl *ptr)
{
    cdl *ptr1=ptr;
    if(ptr==NULL)
     {
        printf("List is empty\n");
        getch();
        return;
     }
     else if(ptr->next==head) //for single element case
     {
         head=NULL;
         printf("List is empty\n");
     }
    else
     {
        while(ptr1->next!=head)
            ptr1=ptr1->next;
        ptr1->prev->next=ptr1->next;
        ptr->prev=ptr1->prev;
        free(ptr1);
     }
     printf("Element deleted successfully");
     getch();
}
