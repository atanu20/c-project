#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct list
  { int z;
    char name[20];
    struct list *link;
  }l;

l *head ;
void create(l *);
void display(l *);

int main()
{  system("cls");
   fflush(stdin);
   head = (l *)malloc(sizeof(l));
   printf("\n Creating the list:\n");
   create(head);
   printf("Display list: \n");
   display(head);
return 0;
}
 void create( l *ptr)
{int ch;
  printf("give name of the student:");
  gets(ptr->name);
  printf("Enter the Roll no :");
  scanf("%d",&ptr->z);
  ptr->link=NULL;
  printf("Press 1 to continue or 0 to exit:");
  scanf("%d",&ch);
  fflush(stdin);
  if(ch==1)
  {
  	ptr->link=(l *)malloc(sizeof(l));
  	ptr = ptr->link;
    return(create(ptr));
  }
 }

void display( l *ptr)
{while(ptr != NULL)
   { printf("%d ",ptr->z);
   
     puts(ptr->name);
     printf("->");
     ptr = ptr->link;
    }
printf("NULL");
}
