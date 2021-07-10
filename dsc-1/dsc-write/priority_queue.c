//priority queue implementation

#include <stdio.h>
#include <stdlib.h>


typedef struct node
{ int priority;
  int info;
  struct node *link;
}NODE;

NODE *front = NULL;
void insert();
void del();
void display();


int main()
{  int choice,item,priority;
    char ch='y';
    while(ch=='y')
	{system("cls");
		printf("Priority Queue\n");
 		printf("1.Insert\n");
        printf("2.low priority Delete\n");
        printf("3.Display\n");
        printf("4.Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
    switch(choice)
    {
     case 1: printf("Input the item value to be added in the queue : ");
             scanf("%d", &item);
             printf("Enter its priority : ");
             scanf("%d", &priority);
             insert(item,priority);
             break;
    case 2: del();
            getch();
            break;
    case 3:display();
           getch();
           break;
    default :
	exit(0);
	break;
//    default : printf("Wrong choice\n");
//    getch();
        }
    }
// 		      printf("\n Do you want to do operations in the same queue?: ");
//              scanf(" %c",&ch);
//	          getch();
	          return 0;
}
void insert(int item, int priority)
{  NODE *tmp,*q;
    tmp = (NODE *)malloc(sizeof(NODE));
 tmp->info = item;
 tmp->priority = priority;

 if( front == NULL || priority < front -> priority )
 {
  tmp->link = front;
  front = tmp;
}
 else
 {
  q = front;
  while( q->link != NULL && q->link->priority <= priority )
   q=q->link;
  tmp->link = q->link;
  q->link = tmp;
}
}

void del()
{
 NODE *tmp;
 if(front == NULL)
   printf("Queue Underflow\n");
 else
 {
  tmp = front;
  printf("Deleted item is %d\n",tmp->info);
  front = front->link;
  free(tmp);
}
}

void display()
{
  NODE *ptr;
  ptr = front;
 if(front == NULL)
  printf("Queue is empty\n");
 else
{
  printf("Queue is :\n");
  printf("Priority Item\n");
while(ptr != NULL)
{
  printf("%5d %5d\n",ptr->priority,ptr->info);
  ptr = ptr->link;
}
}
}
