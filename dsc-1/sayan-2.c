#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>





typedef struct list
{
    int x;
    struct list *next;
}l;
l * head;
l *new;

void create(l *);
void display(l *);
void insert_beg(l*);
void insert_end(l *);
void insert_after(l *);

int main()
{
    head = (l *)malloc(1 * sizeof(l));
    int choice;char ch='y';
    while(ch=='y' || ch=='Y')
   {
   	system("cls");
      printf("\n ~ Main Menu ~ ");
      printf("\n\n 1. Create a linked list");
      printf("\n 2. Display the linked list");
      printf("\n 3. Insert at the beginning of the linked list");
      printf("\n 4. Insert at the end of the linked list");
      printf("\n 5. Insert after given element of the linked list ");
      //printf("\n 6. Insert before given element of the linked list ");
     
      printf("\n Enter your choice:");
      scanf("%d",&choice);

       switch(choice)

          {
              case 1:
                  printf("\n Creating the list");
                  create(head);
                   getch();
                  break;
              case 2:
                  printf("\n Displaying the list\n");
                  display(head);
                  break;
              case 3:
                  printf("\n Inserting at the beginning of the list");
                  insert_beg(head);
                   getch();
                  break;
              case 4:
                   printf("\n Inserting at the end of the linked list");
                   insert_end(head);
                    getch();
                   break;
              case 5:
                   printf("\n Inserting after given element of the linked list ");
                   insert_after(head);
                   getch();
                   break;
              default:
              	exit(0);
             
          }


     printf("\n do u want to continue with the hole process : ");
     scanf(" %c",&ch);
  }
}




void create( l *ptr)
{
    char ch = 'y';
    printf("\n Enter the element of the current node:");
    scanf("%d",&ptr->x);
    ptr->next=NULL;
    printf("\n Do you want to continue?:");
    scanf(" %c",&ch);
    if((ch=='y') || (ch=='Y'))
    {
         ptr->next=(l *)malloc(1*sizeof(l));
         ptr = ptr->next;
         return(create(ptr));
    }
}





void display( l *ptr)
{
    while(ptr != NULL)
    {
         printf("%d ->",ptr->x);
         ptr = ptr->next;
    }
printf("NULL");
}



void insert_beg(l * ptr)
{
     l *new;
     new = (l *)malloc(1*sizeof(l));
     new->next=head;
     head=new;
     printf("\n Enter the element of the new node:");
     scanf("%d",&new->x);

}


void insert_end(l * ptr)
{
     l *new;
     new = (l *)malloc(1*sizeof(l));
     while(ptr->next != NULL)
     ptr = ptr ->next;
     new->next = ptr ->next;
     ptr->next = new;
     printf("\n Enter the element of the new node:");
     scanf("%d", &new->x);
}


void insert_after(l * ptr)

{
    l *n2;
    int element,ele;
    printf("Enter the element after which you want to insert: ");
    scanf("%d",&element);
    printf("\nEnter the element of the new node : ");
    scanf("%d",&ele);
    while(ptr != NULL)
    {
       if(ptr->x == element)
       {
         n2 = (l *)malloc(sizeof(l));
         n2->next=ptr->next;
         ptr->next=n2;
         n2->x=ele;


       }
         ptr=ptr->next;

    }
}
