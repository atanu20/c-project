#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct doublelinklist
{
   int x;
   struct doublelinklist *next;
   struct doublelinklist *prev;
}dl;

void create(dl *);
void display(dl *);
void ins_beg(dl *);
void ins_aft(dl *);
void ins_bef(dl *);
void ins_end(dl *);
void del_beg(dl *);
void del_aft(dl *);
void del_bef(dl *);
void del_end(dl *);

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
     printf("3\tInsert at beginning\n");
     printf("4\tInsert after any node\n");
     printf("5\tInsert before any node\n");
     printf("6\tInsert at the end\n");
     printf("7\tDelete from beginning\n");
     printf("8\tDelete after any node\n");
     printf("9\tDelete before any node\n");
     printf("10\tDelete from end\n");
     printf("11\tExit\n");
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
             ins_beg(head);
              getch();
             break;
       case 4:
             ins_aft(head);
              getch();
             break;
       case 5:
             ins_bef(head);
              getch();
             break;
       case 6:
             ins_end(head);
              getch();
             break;
       case 7:
             del_beg(head);
              getch();
             break;
       case 8:
             del_aft(head);
              getch();
             break;
       case 9:
             del_bef(head);
              getch();
             break;
       case 10:
             del_end(head);
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
      printf("Forward direction\n");
      while(ptr->next!=NULL)
       {
         printf("%d->",ptr->x);
         ptr=ptr->next;
       }
//      printf("%d->",ptr->x);
//      printf("NULL");
//      printf("\nBackward direction\n");
      do
       {
         printf("%d->",ptr->x);
         ptr=ptr->prev;
       }while(ptr!=NULL);
       printf("NULL");
    }
}

void ins_beg(dl *ptr)
{
    dl *new1;
    printf("Inserting element in the beginning");
    new1=(dl*)malloc(sizeof(dl));
    printf("\nEnter the number:");
    scanf("%d",&new1->x);
    new1->prev=ptr->prev;
    new1->next=ptr;
    ptr->prev=new1;
    head=new1;
}

void ins_aft(dl *ptr)
{
    dl  *new1;
    printf("Inserting element after an element");
    printf("\nEnter the number after which you want to add: ");
    scanf("%d",&ele);
    while(ptr!=NULL)
    {
     if(ptr->x==ele)
      {
        new1=(dl*)malloc(sizeof(dl));
        printf("Enter the number:");
        scanf("%d",&new1->x);
        new1->prev=ptr;
        new1->next=ptr->next;
        if(ptr->next!=NULL) 
           ptr->next->prev=new1;
        ptr->next=new1;
       }
      ptr=ptr->next;
    }
}

void ins_bef(dl *ptr)
{
    dl  *new1;
    printf("Inserting element before an element ");
    printf("\nEnter the number before which you want to add:");
    scanf("%d",&ele);

    while(ptr!=NULL)
    {
     if(ptr->x==ele)
      {
        new1=(dl*)malloc(sizeof(dl));
        printf("Enter the number:");
        scanf("%d",&new1->x);
        new1->next=ptr;
        new1->prev=ptr->prev;
        if(ptr->prev!=NULL) 
           ptr->prev->next=new1;
        else                 
            head=new1;
        ptr->prev=new1;
      }
      ptr=ptr->next;
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

void del_beg(dl *ptr)
{
    if(ptr==NULL)
     {
        printf("underflow\n");
        getch();
        return;
     }
    else if(ptr->next==NULL) 
    {
        head=NULL;
        printf("underflow\n");//List is empty
    }
     else
     {
        head=ptr->next;
        head->prev=ptr->prev;
        free(ptr);
     }
     printf("Element deleted successfully");
     getch();
}

void del_aft(dl *ptr)
{
    dl *node;
    printf("Enter the element after which you want to delete:");
    scanf("%d",&ele);
    if(ptr==NULL)
    {
        printf("underflow\n");
        getch();
        return;
    }

    while(ptr!=NULL)
    {
      if(ptr->x==ele)
       {
        if(ptr->next==NULL)  
            printf("No element is present after this\n");
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

void del_bef(dl *ptr)
{
    dl *node;
    printf("Enter the element before which you want to delete:");
        scanf("%d",&ele);
    if(ptr==NULL)
    {
        printf("underflow\n");
        getch();
        return;
    }

    while(ptr!=NULL)
    {
      if(ptr->x==ele)
       {
         if(ptr->prev==NULL)  
            printf("No element is present before the occurrence of this element at first position.\n");
          node=ptr->prev;
          ptr->prev=node->prev;
          if(node->prev!=NULL) 
            node->prev->next=ptr;
          else 
            head=ptr;
          free(node);
       }
      ptr=ptr->next;
    }
      printf("Element(s) deleted successfully");
      getch();
}

void del_end(dl *ptr)
{
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
    else
     {
        while(ptr->next!=NULL)
            ptr=ptr->next;
        ptr->prev->next=ptr->next;
        free(ptr);
     }
     printf("Element deleted successfully");
     getch();
}
