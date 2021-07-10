#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct person
{
    int x;
    struct person *next;
    struct person *prev;
}p;

p *head, * new1, *ptr1, *loc, *current1, *previous, *counter;
int ele,ele1;

void create(p *);
void display(p *);
void insert_beg(p *);
void insert_after(p *);
void insert_bef(p *);
void insert_end(p *);
void delete_beg(p *);
void delete_after(p *);
void delete_before(p *);
void delete_end(p *);

int main()
{
    char ch='y';
    int n;
    head=(p *)malloc(sizeof(p));
    printf("Create a list\n");
    create(head);

    while ((ch=='y') || (ch=='Y'))
    {
        system("cls");
        printf("\n1. Insert In The Beginning\n");
        printf("2. Insert After value\n");
        printf("3. Insert In The End\n");
	    printf("4. Insertion in the list before any node\n");
        printf("5. Delete In The Beginning\n");
        printf("6. Delete after a node\n");
        printf("7. Delete before a node\n");
        printf("8. Delete at the end\n");
        printf("9. display all value\n");
        printf("0. exit\n");


	printf("Choose any one option: ");
	scanf("%d",&n);
	switch(n)
	{
          case 1: insert_beg(head);
                   break;
          case 2: insert_after(head);
                   break;
          case 3: insert_end(head);
                   break;
          case 4: insert_bef(head);
                   break;
          case 5: delete_beg(head);
                   break;
          case 6: delete_after(head);
                   break;
          case 7: delete_before(head);
                   break;
          case 8: delete_end(head);
                   break;
          case 9: printf("\nThe List Is:\n");
		          display(head);
		          break;
          default:printf("\nWrong option given");
                    exit(0);

	}
	printf("\nDo you want to continue??\n");
	scanf(" %c",&ch);

	}

	return 0;
}


void create(p *ptr)
{
        char ch;
        printf("Enter no: ");
        scanf("%d",&ptr->x);
        ptr->next=NULL;
        printf("Do you want to continue?: ");
        scanf(" %c",&ch);

        //fflush(stdin);

        if((ch=='y') || (ch=='Y'))
        {

            ptr->next=(p *)malloc(sizeof(p));
            ptr->next->prev=ptr;
            ptr=ptr->next;
            create(ptr);
        }

}


void display(p *ptr)
{

	
	
	
	
	
    while (ptr->next)
    {
        printf(" %d->",ptr->x);
        ptr=ptr->next;
    }
    do
    {
      printf(" %d->",ptr->x);
        ptr=ptr->prev;
    }while(ptr);
    return;
}



//void display(dl *ptr)
//{
//    printf("Displaying the list\n");
//    if(ptr==NULL)
//      printf("List is empty");
//    else
//    {
//      printf("In forward direction\n");
//      while(ptr->next!=NULL)
//       {
//         printf("%d->",ptr->x);
//         ptr=ptr->next;
//       }
//      printf("%d->",ptr->x);
//      printf("NULL");
//      printf("\nIn backward direction\n");
//      do
//       {
//         printf("%d->",ptr->x);
//         ptr=ptr->prev;
//       }while(ptr!=NULL);
//       printf("NULL");
//    }
//}




void insert_beg(p *ptr)
{
    new1=(p *)malloc(sizeof(p));
    printf("\nEnter The element of the new node: ");
    scanf(" %d",&new1->x);
    new1->prev=ptr->prev;
    new1->next=ptr;
    ptr->prev=new1;

    return (new1);
}





void insert_after(p *ptr)
{
    p *new2;
    int element;
    printf("Enter the element after which you want to insert: ");
    scanf(" %d",&element);

   while(ptr!=NULL)
   {
       if(ptr->x == element)
       {
           new2=(p *)malloc(sizeof(p));
           printf("Enter the element you want to insert: ");
           scanf(" %d",&new2->x);

           new2->prev=ptr;
           new2->next=ptr->next;
           ptr->next->prev=new2;
           ptr->next=new2;
       }
        ptr=ptr->next;
   }
}


void insert_bef(p *ptr)
{
    printf("\nEnter the value before which to insert: ");
    scanf("%d",&ele);
    while(ptr)
    {
        if(ptr->x==ele)
        {
            p *new2=(p *)malloc(sizeof(p));
            printf("Enter the value: ");
            scanf("%d",&new2->x);

            new2->prev=ptr->prev;
            new2->next=ptr;
            ptr->prev->next=new2;
            ptr->prev=new2;
        }
        ptr=ptr->next;
    }
}

void insert_end(p *ptr)
{
    new1=(p *)malloc(sizeof(p));
   printf("\nEnter The element of the new node: ");
   scanf(" %d",&new1->x);
   while(ptr->next)
    ptr=ptr->next;

   new1->prev=ptr;
   new1->next=ptr->next;
   ptr->next=new1;

}




void delete_beg(p *ptr)
{
    p *node;
    if(ptr==NULL)
    {
        printf("\nUnderflow");
        return;
    }
    else
        {
        node=ptr->next;
        node->prev=ptr->prev;
        head=node;
        free(ptr);
        }
}


void delete_after(p *ptr)
{
    p *ptr2;
    int val;

    printf("Enter the value you want to delete: ");
    scanf(" %d",&val);

    if(ptr==NULL)
        printf("The List Is Empty");
    else
    {
        while(ptr->x!=val)
            ptr=ptr->next;

    ptr2=ptr->next;
    ptr->next=ptr2->next;
    ptr2->next->prev=ptr;
    free(ptr2);
    }
}

void delete_before(p *ptr)
{
    p *ptr2;
    int val;
    printf("Enter the value you want to delete: ");
    scanf(" %d",&val);

    if(ptr==NULL)
        printf("The List Is Empty");
    else
    {
        while(ptr->x!=val)
            ptr=ptr->next;

    ptr2=ptr->prev;
    ptr->prev=ptr2->prev;
    ptr2->prev->next=ptr;
    free(ptr2);
    }
}

void delete_end(p *ptr)
{
    if(ptr==NULL)
        printf("The List Is Empty");
    else
    {
        while(ptr->next)
            ptr=ptr->next;

    ptr->prev->next=ptr->next;
    free(ptr);
    }

}
