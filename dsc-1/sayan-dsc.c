#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct person
{
    int x;
    struct person *next;
}p;

p *head;
p *new;
p *ptr1;
int ele,ele1,element;

void create(p *);
void display(p *);
void insert_beg(void);
void insert_mid(p *);
void insert_end(p *);
//void insert_bef(p *);
//void insert_bet(p *);

void create(p *ptr)
{
        int i;
        printf("Enter no: ");
        scanf("%d",&ptr->x);
        ptr->next=NULL;

}

void display(p *ptr)
{
    while (ptr!=NULL)
    {
        printf("%d -> ",ptr->x);
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

// void insert_bet(p *ptr)
//{ printf("\n Enter the values between which to insert:");
//scanf("%d %d", &ele,&ele1);
//p *ptr1 = ptr->next;
//p *new1 = (p *)malloc(sizeof(p));
//printf("Enter the value of the new node:");
//scanf("%d",&new1->x);
//while(ptr1 != NULL)
//{
//if((ptr->x == ele) && (ptr1->x == ele1))
//{ new1 ->next = ptr->next;
//ptr->next = new1;
//}
//ptr = ptr1;
//ptr1 = ptr1->next;
//}
//}
//
//void insert_bef(p *ptr)
//{ printf("\n Enter the value before which to insert:”);
//scanf("%d", &ele);
//p *ptr1 = ptr->next;
//p *new1 = (p *)malloc(sizeof(p));
//printf("Enter the value of the new node:");
//scanf("%d",&new1->x);
//while(ptr1 != NULL)
//{
//if((ptr1->x == ele))
//{ new1 ->next = ptr->next;
//ptr->next = new1;
//}
//ptr = ptr1;
//ptr1 = ptr1->next;
//}
//}




int main()
{
    int n,k;
    head=(p *)malloc(sizeof(p));
    printf("Create a node:\n");

    create(head);

    do
    {
    	system("cls");
	printf("\n1. Insert In The Beginning\n");
    printf("2. Insert In The Middle\n");
    printf("3. Insert In The End\n");
	printf("4. display all value\n");
//	printf("5.det\n");
//	printf("6. defore\n");


	printf("Choose any one option: ");
	scanf("%d",&n);
	switch(n)
	{
	    case 1: insert_beg();
	    		getch();
                break;
        case 2:	insert_mid(head);
        		getch();
                 break;
        case 3: insert_end(head);
        		getch();
                 break;
		case 4:	display(head);
				getch();
				break;
		case 5:
			//insert_bet(head);
			getch();
				break;
			
		case 6:
			//insert_bef(head);
			getch();
				break;
			
		default: 
		exit(0);
	}

	}while(n!=0);

	return 0;
}
