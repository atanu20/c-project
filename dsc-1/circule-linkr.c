#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct list
{
    int z;
    struct list *next;
}node;

node *createList(node*last);
node *display(node *last);
 node *addatbeg(node *last,int);
 node *addatend(node *last,int);
 node *addafter(node *last,int,int);
 node *addtoempty(node *last,int );

int main()
{
    int choice, value,item;
    node *last=NULL;

    while(1)
    {
        system("cls");
        printf("\n1. Create List ");
        printf("\n2. Display List ");
        printf("\n3. Add at beginning List ");
        printf("\n4. Add at the end of the List ");
        printf("\n5. Add after the  List ");
        printf("\n6. EXIT");

        printf("\n\nEnter your choice");
        scanf("%d",&choice);
        fflush(stdin);
        switch(choice){
             case 1:
                last=createList(last);
                break;
             case 2:
                 display(last);
                 break;
             case 3:
                printf("Enter a number for the list");
                scanf("%d",&value);
                last=addatbeg(last,value);
                break;
             case 4:
                 printf("Enter a number for the list");
                scanf("%d",&value);
                last=addatend(last,value);
                break;
             case 5:
                printf("Enter a number for the list");
                scanf("%d",&value);
                printf("Enter item value after new value to be inserted ");
                scanf("%d",&item);
                last=addafter(last,value,item);
                break;
             case 6:
                 printf("Enter a number for the list");
                 scanf("%d",&value);
                 last=addtoempty(last,value);
                 break;
             case 7:
                exit(0);
             default:
                printf("Invalid choice");
        }
    }
}


node *createList(node *last)
{
    int i,n,value;
    printf("Hoe many values you want to enter enter");
    scanf("%d",&n);
    printf("Enter first data for the list");
    scanf("%d",&value);
    
    for(i=2;i<=n;i++)
    {
        printf("Enter data for the list");
        scanf("%d",&value);
        
        
    }
    return createList(value);
}
node *addafter(node *last,int value,int item)
{
    node *t,*n;
    t=last->next;
    do{
        if(t->z==item)
      {

        n=(node*)malloc(sizeof(node));
        n->z=value;
        n->next=t->next;
        t->next=n;
        if(t==last)
            last=n;
        return(last);
}
t=t->next;
    }while(t!=last->next);}
node *addatend(node *last,int value)
{
    node*n;
    n=(node*)malloc(sizeof(node));
    n->z=value;
    n->next=last->next;
    last->next=n;
    last=n;
    return(last);
}

 node *addtoempty(node *last,int value)
{
    node *n;
    n=(node*)malloc(sizeof(node));
    n->z=value;
    last=n;
    last->next=last;
    return(last);
}

node *addatbeg(node *last,int value)
{
    node *n;
    n=(node*)malloc(sizeof(node));
    n->z=value;
    n->next=last->next;
    last->next=n;
    return(last);
}
node *display(node *last)
{
    node *t;
    if(last==NULL)
        printf("List is empty");
    else{
        t=last->next;
        while(t!=last->next);{
            printf("%d->",t->z);
            t=t->next;
        }

    }return last;

}
