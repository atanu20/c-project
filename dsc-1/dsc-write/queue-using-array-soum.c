#include <stdio.h>
#include <stdlib.h>
#define size 100

static int front = -1;
static int rear = -1;
int a[size];
void create_q(int *);
void insert_q(int *, int);
void delete_q(int *);
void display_q(int *);
int main()
{
   int data;
   int choice;
   char ch='y';
   while(ch=='y')
   {
        system("cls");
        printf("Main Menu\n");
        printf(" 1 creating Queue using array\n");
        printf(" 2 displaying Queue\n");
        printf(" 3 pushing elements into the Queue\n");
        printf(" 4 popping elements from the Queue\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:printf("\nCreation of Queue");
                   create_q(a);
                   break;
            case 2:printf("\nDisplay the queue");
                   display_q(a);
                   break;
            case 3:printf("\nPush into the Queue");
                   printf("\nEnter the element to push: ");
                   scanf("%d",&data);
                   insert_q(a,data);
                   break;
            case 4:printf("\nPop from the Queue");
                   delete_q(a);
                   break;
            default:printf("Please give correct choice");
                    exit(0);
                    break;
        }
        printf("\nDo you want to continue?: ");
        scanf(" %c",&ch);
   }
}
void create_q(int *t)
{
    int i;
    system("cls");
    printf("\n Enter the no. of elements to be inserted:");
    scanf("%d", &rear);
    for(i=0; i<rear; i++)
    {
        printf("\nEnter the %d th element:", i);
        scanf("%d", t);
        t++;
    }
    front = front +1;
}
void insert_q(int *t, int d)
{
    int i;
    if(front==(size))
    {
        printf("Overflow!");
    }
    else
    {
        for(i=0;i<rear;i++)
        {
            t++;
        }
        *(t)=d;
        rear=rear+1;
    }

}
void delete_q(int *t)
{
    int element;
    if(front==-1)
    {
        printf("Underflow!!!");
        return;
    }
    else
    {
        element=*(t);
        *(t)=0;
        front=front+1;
    }
}
void display_q(int *t)
{
    int i;
    system("cls");
    printf("\n The elements in Queue are: ");
    for(i=front;i<rear;i++)
    {
        printf("\n%d", *(t+i));
    }
}
