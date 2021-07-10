//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h>
//
//void creat(void);
//
//struct node{
//	char a[50];
//	int no;
//	struct node* link;
//};
//
//struct node* root=NULL;
//int ch;
//
//int main()
//{
//	while(1)
//	{
//		system("cls");
//		printf("enter details: \n");
//		printf("1.creat list: \n");
//		printf("2.display: \n");
//		printf("enter choice: \n");
//		scanf("%d",&ch);
//		switch(ch)
//		{
//			case 1:
//				creat();
//				getch();
//				break;
//				
//				
//		}
//		
//	}
//}
//
//void creat(void)
//{
//		struct node* temp;
//	temp=(struct node*)malloc(sizeof(struct node));
//	
//	printf("enter number: ");
//	scanf("%d", &temp->no);
//	printf("enter name:");
//	gets(temp->a);
//	temp->link=NULL;
//	
//	if(root ==NULL)
//	{
//		root=temp;
//	}
//	else{
//		struct node* p;
//		p=root;
//		while(p->link!=NULL)
//		{
//			p=p->link;
//		}
//		p->link=temp;
//	}
//}


#include<stdio.h>
#include<stdlib.h>
struct stud
{
  char name[20];
  int age;
  int height;
  struct stud *next;
};
struct stud *root=NULL;
int main()
{
  int n,i;
  struct stud *temp;
  printf("enter the number of students\n");
  scanf("%d",&n);
 
  for(i=0;i<n;i++)
    {
      printf("student %d:\n",i+1);
      temp=(struct stud *)malloc(sizeof(struct stud));
      temp->next=NULL;
      printf("enter name ");
      scanf("%s",temp->name);
      printf("enter age ");
      scanf("%d",&temp->age);
      printf("enter height ");
      scanf("%d",&temp->height);
      
      temp->next=root;
      root=temp;
      
    }



  printf("\n\n print the information about students \n");
  while(root!=NULL)
    {
      printf("student %d:\n",i);
      i--;
      printf("name: %s\n age: %d\n height: %d\n\n",root->name,root->age,root->height);
      root=root->next;
    }


  return 0;
}                                

/*

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


void creat(void);
void display(void);

typedef struct node{
	char a[50];
	int no;
	struct node *link;
}l;
struct node *root;
int ch,i=0;

int main()
{
	while(1)
	{
		system("cls");
		printf("\n\t\tStudent details: ");
	printf("\n\t\t1.Create list: ");
	printf("\n\t\t2.Display list: ");
	printf("\n\t\t3.Exit: ");
	printf("\n\t\tenter choice :");
	scanf("%d",&ch);
	
		switch(ch)
	  {
		case 1:
			creat();
			getch();
			break;
		case 2:
				display();
				getch();
				break;
		case 3:
				exit(0);
		default:
			{
				printf("\t\tInvalid input:");
				getch();
			}
      }
	}
	
}


void creat(void)
{
	struct node *temp, *p;
	temp=(struct node *)malloc(sizeof(struct node));
	fflush(stdin);
	printf("\t\t\tenter name: ");
	gets(temp->a);
	printf("\t\t\tenter no. ");
	scanf("%d",&temp->no);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else{
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
			
		}
		p->link=temp;
	}
	
}

void display(void)
{i=0;
	struct node *temp;
	temp=root;
	
	if(temp==NULL)
	{
		printf("\t\tno data");
	}
	else{
		while(temp!=NULL)
		{
			printf("\n\n\t\tStudent %d details\n",i+1);
			printf("\t\tName: ");
			puts(temp->a);
			printf("\t\tRoll no: ");
			printf("%d",temp->no);
			
			temp=temp->link;
			i++;
		}
	}
}


*/



