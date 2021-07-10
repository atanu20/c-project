#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct person
{
    int x;
    struct person *next;
}p;

p *head, *new, *ptr1, *loc;
int ele,ele1;

void create(p *);
void display(p *);
void insert_beg(void);
void insert_mid(p *);
void insert_end(p *);
void delete_beg(p *);
void delete_anypos(p *);
void insert_bet(p *);
void insert_bef(p *);
void li_sort(p *);
void search_li(p *);

int main()
{
    int n,k,s,l;
    head=(p *)malloc(sizeof(p));
    printf("Create a list:\n");

    create(head);

    do
    {
       // system("cls");
	printf("\n1. Insert any position\n");
	printf("2. Insert before any value\n");
	printf("3. Delete a number\n");
	printf("4. Sorting the list\n");
	printf("5. Search any value\n");
	printf("6. display all value\n");
	printf("0. exit\n");


	printf("Choose any one option: ");
	scanf("%d",&n);
	switch(n)
	{
	    case 1: printf("\n1. Insert In The Beginning\n");
                printf("2. Insert After value\n");
                printf("3. Insert In The End\n");

                    printf("Choose any one option: ");
                    scanf("%d",&k);
                    switch(k)
                    {
                        case 1: insert_beg();
                                break;
                        case 2:	insert_mid(head);
                                break;
                        case 3: insert_end(head);
                                break;
                        default:printf("wrong Input\n");
                                break;
                    }
                    break;
         case 2: printf("\n1. Insertion in the list before any node\n");
                 printf("2. Insertion in the list between any node\n");

                    printf("Choose any one option: ");
                    scanf("%d",&s);
                    switch(s)
                    {
                        case 1: insert_bef(head);
                                break;
                        case 2:	insert_bet(head);
                                break;
                        default: printf("wrong Input\n");
                                break;
                    }
                    break;

         case 3: printf("\n1. Delete In The Beginning\n");
                 printf("2. Delete any Position\n");

                    printf("Choose any one option: ");
                    scanf("%d",&l);
                    switch(l)
                    {
                        case 1: delete_beg(head);
                                break;
                        case 2:	delete_anypos(head);
                                break;
                        default: printf("wrong Input\n");
                                break;
                    }
                    break;
        case 4:	printf("Sorting done successfully.");
                li_sort(head);
				break;
       case 5:	search_li(head);
                break;
		case 6:	printf("\nThe List Is:\n");
		        display(head);
				break;
		default: printf("Nothing");
				 break;
	}

	}while(n!=0);

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

        fflush(stdin);

        if((ch=='y') || (ch=='Y'))
        {
            ptr->next=(p *)malloc(sizeof(p));
            ptr=ptr->next;
            (create(ptr));
        }

}


void display(p *ptr)
{
    while (ptr!=NULL)
    {
        printf(" %d->",ptr->x);
        ptr=ptr->next;
    }
    printf("NULL");

}


void insert_beg()
{
    new=(p *)malloc(sizeof(p));
    new->next=head;
    head=new;
    printf("\nEnter The element of the new node: ");
    scanf(" %d",&new->x);

}


void insert_end(p *ptr)
{
    new=(p *)malloc(sizeof(p));
   while(ptr->next!=NULL)
    ptr=ptr->next;
   new->next=ptr->next;
   ptr->next=new;
   printf("\nEnter The element of the new node: ");
    scanf(" %d",&new->x);
}


void insert_mid(p *ptr)
{
    p *new2;
    int element,ele;
    printf("Enter the element after which you want to insert: ");
    scanf("%d",&element);
    printf("Enter the element you want to insert: ");
    scanf("%d",&ele);

   while(ptr!=NULL)
   {
       if(ptr->x == element)
       {
            new2=(p *)malloc(sizeof(p));
            new2->next=ptr->next;
            ptr->next=new2;
            new2->x=ele;
       }
        ptr=ptr->next;

   }
}


void delete_beg(p *ptr)
{
    p *node;
    ptr=head;
    if(ptr==NULL)
    {
        printf("\nUnderflow");
        return 0;
    }
    else
        {
        node=head;
        head=ptr->next;
        free(node);
        }
}


void delete_anypos(p *ptr)
{

    printf("Enter the number,you want to delete: ");
    scanf("%d",&ele);

    if(ptr->x==ele)
    {
        head=ptr->next;
        loc=ptr;
        free(loc);
        if(head!=NULL)
            delete_anypos(head);
        else
        {
        printf("\nThe list is empty");
        head=NULL;
        }
    }
    else
    {
        ptr1= ptr->next;
        while(ptr1!=NULL)
        {
            if(ptr1->x == ele)
            {
                ptr->next= ptr1->next;
                loc=ptr1;
                free(loc);
            }
            ptr= ptr-> next;
            ptr1= ptr1-> next;
        }
    }
}


void insert_bef(p *ptr)
{
    printf("\nEnter the value before which to insert: ");
    scanf("%d",&ele);
    ptr1=ptr->next;
    p *new1=(p *)malloc(sizeof(p));
    printf("Enter the value: ");
    scanf("%d",&new1->x);
    while(ptr1!=NULL)
    {
        if(ptr1->x==ele)
        {
            new1->next=ptr->next;
            ptr->next=new1;
        }
        ptr=ptr1;
        ptr1=ptr1->next;
    }
}


void insert_bet(p *ptr)
{
    printf("\n\nEnter the value between which to insert: ");
    scanf("%d %d",&ele,&ele1);
    ptr1=ptr->next;
    p *new1=(p *)malloc(sizeof(p));
    printf("Enter the value: ");
    scanf("%d",&new1->x);
    while(ptr1!=NULL)
    {
        if((ptr->x==ele) && (ptr1->x==ele1))
        {
            new1->next=ptr->next;
            ptr->next=new1;
        }
        ptr=ptr1;
        ptr1=ptr1->next;
    }
}


void li_sort(p *ptr)
{
    ptr1=NULL;
    if(ptr==NULL)
        return (1);
    while(ptr)
    {
        ptr1=ptr->next;
        while(ptr1)
        {
            if(ptr->x > ptr1->x)
            {
                swap(ptr,ptr1);

            }
             ptr1=ptr1->next;
        }
         ptr=ptr->next;
    }
}

void swap(p *a,p *b)
{
    int temp;
    temp=a->x;
    a->x=b->x;
    b->x=temp;
}


void search_li(p *ptr)
{
    int count=0;
    printf("\nEnter the element to be found: ");
    scanf("%d",&ele);
    while(ptr!=NULL)
    {
        if(ptr->x==ele)
        {
            count++;
        }
        ptr=ptr->next;
    }
    if(count>0)
        printf("The element is found %d times",count);
    else
        printf("\n The element is not found");
}
