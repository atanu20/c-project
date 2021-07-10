#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int x;
    struct node *next;
}N;

N *head,*new1,*ptr1,*loc;

int ele,ele1,flag;

void create(N *);
void display(void);
void sort(void);
void search(void);
void delete1(N *);
void swap(N *,N *);
void insert_bet(void);
void insert_af(void);
void insert_bef(void);
void insert_beg(void);
void reverse(void);


int main()
{
    char ch='y';
    int no;
    head=(N *)malloc(sizeof(N));
    while(ch=='y')
    {
        system("cls");
        printf("\n MAIN MENU:-");
        printf("\n 1) Create a List");
        printf("\n 2) To insert new number at the begining");
        printf("\n 3) To insert new number after the number");
        printf("\n 4) To insert new number before the number");
        printf("\n 5) To insert new number between the two number");
        printf("\n 6) To search a number in a list");
        printf("\n 7) To sort a list");
        printf("\n 8) To delete a number in a list");
        printf("\n 9) To reverse a list");
        printf("\n 10) To display a list");
        printf("\n 11) For EXIT");
        printf("\nEnter your Choice:");
        scanf("%d",&no);
        switch(no)
        {
            case 1: printf("\nCreating a list:");
                    create(head);
                    break;
            case 2: printf("\nInsert new number at the beginning:");
                    insert_beg();
                    break;
            case 3: printf("\nInsert new number after the number");
                    insert_af();
                    break;
            case 4: printf("\nInsert new number before the number");
                    insert_bef();
                    break;
            case 5: printf("\nInsert new number between the two number");
                    insert_bet();
                    break;
            case 6: printf("\nSearch number in a list");
                    search();
                    break;
            case 7: printf("\nList has been sorted successfully:)");
                    sort();
                    break;
            case 8: printf("\nDelete a number");
                    printf("\nEnter the number you want to delete from the list:");
                    scanf("%d",&ele);
                    delete1(head);
                    break;
            case 9: reverse();
                    break;
            case 10: printf("\nLink List:");
                    display();
                    break;
            default: printf("\nYour choice is WRONG");
                     exit(0);
        }
        printf("\nDo you want to CONTINUE?:");
        scanf(" %c",&ch);
    }
    return 0;
}


void create(N *ptr)
{
    char ch;
    printf("\nEnter the number:");
    scanf("%d",&ptr->x);
    ptr->next=NULL;
    printf("\n Press 'y' to continue:");
    scanf(" %c",&ch);
    if(ch=='y' || ch=='Y')
    {
        ptr->next=(N *)malloc(sizeof(N));
        ptr=ptr->next;
        return create(ptr);
    }
}

void delete1(N *ptr)
{
    if(ptr->x==ele)
        {
            loc=head;
            head=ptr->next;
            free(loc);
            printf("Element is deleted successfully");
            if(head!=NULL)
                delete1(head);
            else
            {
                printf("\nList is Empty");
                head=NULL;
            }
        }
        else
        {    ptr1=ptr->next;
                while(ptr1!=NULL)
                {
                    if(ptr1->x==ele)
                   {
                        ptr->next=ptr1->next;
                        loc=ptr1;
                        free(loc);
                        printf("\nElement is deleted successfully");
                        ptr1=ptr->next;
                    }
                    else{
                     ptr=ptr1;
                     ptr1=ptr->next;
                        }
                }
            }
           

}

 void sort()
{
    N *ptr=head;
    while(ptr)
    {
        ptr1=ptr->next;
        while(ptr1)
       {
            if(ptr->x>ptr1->x)
                swap(ptr,ptr1);
            ptr1=ptr1->next;
        }
        ptr=ptr->next;
    }
}

void swap(N *a,N *b)
{
    int temp;
    temp=a->x;
    a->x=b->x;
    b->x=temp;
}

void search()
{
    printf("\nEnter the number you want to search:");
    scanf("%d",&ele);
    N *ptr=head;
    flag=0;
    while(ptr!=NULL)
    {
        if(ptr->x==ele)
           {
               flag=1;
               printf("\nFOUND");
               break;
           }
          ptr=ptr->next;
    }
    if(flag==0)
        printf("\nNOT FOUND");
}

void insert_bet()
{
    printf("\nEnter the two number where you want to insert a new number in between:");
    scanf("%d %d",&ele,&ele1);
    N *ptr=head;
    ptr1=ptr->next;
    flag=0;
    while(ptr1!=NULL)
    {
        if(ptr->x==ele && ptr1->x==ele1)
        {
            flag=1;
            new1=(N *)malloc(sizeof(N));
            printf("\nEnter the number which you want to insert between %d and %d:",ele,ele1);
            scanf("%d",&new1->x);
            new1->next=ptr1;
            ptr->next=new1;
        }
        ptr=ptr->next;
        ptr1=ptr->next;
    }

     if(flag==0)
      printf("\n%d or %d is absent in the list",ele,ele1);

}

void insert_bef()
{
    printf("\nEnter the number where you want to insert before");
    scanf("%d",&ele);
    N *ptr=head;
    ptr1=ptr->next;
    flag=0;
    while(ptr1!=NULL)
    {
        if(ptr1->x==ele)
        {
            flag=1;
            new1=(N *)malloc(sizeof(N));
            printf("\nEnter the number you want to insert before %d:",ele);
            scanf("%d",&new1->x);
            new1->next=ptr->next;
            ptr->next=new1;
        }
        ptr=ptr1;
        ptr1=ptr1->next;
    }

    if(flag==0)
       printf("\n%d is absent in the list",ele);
}


void insert_af()
{
    printf("\nEnter the number which you want to insert after:");
    scanf("%d",&ele);
    N *ptr=head;
    flag=0;
    while(ptr->next!=NULL)
    {
        if(ptr->x==ele)
        {
            flag=1;
            new1=(N *)malloc(sizeof(N));
            printf("\nEnter the number which you want to insert after %d:",ele);
            scanf("%d",&new1->x);
            new1->next=ptr->next;
            ptr->next=new1;
        }
        ptr=ptr->next;
    }
    if(flag==0)
       printf("\n%d is absent in the list",ele);
}

void insert_beg()
{
    N *ptr=head;
    if(ptr!=NULL)
    {
        new1=(N *)malloc(sizeof(N));
        printf("\nEnter the number you want to insert at the begining:");
        scanf("%d",&new1->x);
        new1->next=head;
        head=new1;
    }
}

void display()
{
    N *ptr=head;
    while(ptr != NULL)
    {
        printf("%d->",ptr->x);
        ptr=ptr->next;
    }
    printf("NULL");
}

void reverse(void)
{
    N *current=head,*prev=NULL,*counter;
    if(current == NULL)
        printf("\nList is empty");
    else
    {
    while(current)
   {
       counter=current->next;
       current->next=prev;
       prev=current;
        current=counter;
    }
    head=prev;
    printf("\nYour list got reversed successfully:)");
    }
}




/*
void delete_any()
{
int key;

if(header->link == NULL)
{
printf("\nEmpty Linked List. Deletion not possible.\n");
}
else
{
printf("\nEnter the data of the node to be deleted: ");
scanf("%d", &key);

ptr = header;
while((ptr->link != NULL) && (ptr->data != key))
{
ptr1 = ptr;
ptr = ptr->link;
}
if(ptr->data == key)
{
ptr1->link = ptr->link;
free(ptr);
printf("\nNode with data %d deleted.\n", key);
}
else
{
printf("\nValue %d not found. Deletion not possible.\n", key);
}
}

}

*/
