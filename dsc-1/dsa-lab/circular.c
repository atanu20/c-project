//implementation of circular linked list

#include <stdio.h>
#include <conio.h>
#include <malloc.h>
typedef struct node
{
    int data;
    struct node *link;
}cl;

cl *head = NULL;
void create(void);
void display(void);
void insert_beg(void);
void insert_end(void);
void insert_after(void);



int main()
{
    int option;
    char ch='y';
    while(ch=='y'||ch=='Y')
        {
            system("cls");
            printf("\n MAIN MENU:-");
            printf("\n 1) Create a List");
            printf("\n 2) To display a list");
            printf("\n 3) To insert value at the beginning  ");
            printf("\n 4) To insert at any position ");
            printf("\n 5) To insert value at the end");
            printf("\n 6: EXIT");
            printf("\n Enter your option : ");
            scanf("%d", &option);

            switch(option)
            {
                case 1: printf("\n Creating circular list : ");
                        create();
                        break;
                case 2: printf("\n Displaying circular linked list : ");
                        display();
                        getch();
                        break;
                case 3: printf("Inserting value at the beginning : ");
                        insert_beg();
                        break;
                case 4: printf("Inserting value after given value : ");
                        insert_after();
                        break;
                
                case 5: printf("\nInserting at the end :");
                        insert_end();
                        break;
                
                default: exit(0);
            }
            printf("\n do u want to continue with the whole process : ");
            scanf(" %c",&ch);
        }
        return 0;
}
//................................................................................................................................................

void create(void)
{
    cl *new_node, *ptr;
    int num;
    printf("\n Enter -1 to end");
    printf("\n Enter the element of current node : ");
    scanf("%d", &num);
    while(num != -1)
    {
        new_node = (cl *)malloc(sizeof(cl));
        new_node -> data = num;
        new_node->link=NULL;

        if(head == NULL)
        {
            head = new_node;
            ptr=new_node;
        }
       else
       {
           ptr->link=new_node;
           new_node->link=head;
           ptr=new_node;
       }
      printf("\n Enter the element of current node : ");
      scanf("%d", &num);
   }

}

//..................................................................................................................................
void display(void)
{
    cl *ptr=head;
    while(ptr -> link != head)
   {
       printf("%d->", ptr -> data);
       ptr = ptr -> link;
   }
   printf("%d->", ptr -> data);
}

//.,........................................................................................................................

void insert_beg(void)
{
    cl *new_node, *ptr=head;
    int num;
    printf("\n Enter the element of current node : ");
    scanf("%d", &num);
    new_node = (cl *)malloc(sizeof(cl));
    new_node -> data = num;

    while(ptr -> link != head)
          ptr = ptr -> link;
   ptr -> link = new_node;
   new_node -> link = head;
   head = new_node;

}
//.............................................................................................................................
void insert_after(void)

{
    cl *temp;
    int element,ele;
    cl *ptr=head;
    printf("\nEnter the element after which you want to insert: ");
    scanf("%d",&element);
    printf("\nEnter the value you want to insert : ");
    scanf("%d",&ele);


    while(ptr->link !=head)
    {
       if(ptr->data == element)
       {
         temp = (cl *)malloc(sizeof(cl));
         temp->link=ptr->link;
         temp->data=ele;
         ptr->link=temp;
       }
         ptr=ptr->link;
     }

    // if user enter last element
     if(ptr->data == element)
       {
           temp = (cl *)malloc(sizeof(cl));
           temp->data=ele;
           ptr -> link = temp;
           temp-> link = head;
       }

}
//............................................................................................................................

//............................................................................................................................
void insert_end(void)
{
    cl *ptr, *new_node;
    int num;
    printf("\n Enter the element of current node : ");
    scanf("%d", &num);
    new_node = (cl *)malloc(sizeof(cl));
    new_node -> data = num;
    ptr = head;
    while(ptr -> link != head)
    ptr = ptr -> link;
    ptr -> link = new_node;
    new_node -> link = head;
}
//....................................................................................................................................
//....................................................................................................................

