#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void append(void );
void addatbegin(void);
void addatafter(void);
int length(void);
void display(void);
void deletee(void);





int ch;

int c=0;
int loc;

struct node{
	
	int data;
	struct node* link;
	
};

struct node* root=NULL;

int main(void)
{
	while(1)
	{
		system("cls");
		printf("\n\n\n\t\t\t\tsingel linked list \n");
		printf("\n\t\t\t\t1.append\n");
		printf("\n\t\t\t\t2.add at begin\n");
		printf("\n\t\t\t\t3.add at after \n");
		printf("\n\t\t\t\t4.length\n");
		printf("\n\t\t\t\t5.display\n");
		printf("\n\t\t\t\t6.delete\n");
		printf("\n\t\t\t\t7.exit\n");
		
		printf("enter your choice :");
		scanf("%d",&ch);
		
		switch(ch)
		{
			
			case 1:
				append();
				getch();
				break;
			case 2:
				addatbegin();
				getch();
				break;
			case 3:
				addatafter();
				getch();
				break;
			case 4:
				c=length();
				printf("length is %d",c);
				//c=0;
				getch();
				break;
			case 5:
				display();
				getch();
				break;
			case 6:
				deletee();
				getch();
				break;
			case 7:
				exit(0);
			default:
				printf("invalid input");
				getch();
					
			
		}
		
		
	}
	
}

void append( )
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	
	printf("enter number: ");
	scanf("%d", &temp->data);
	temp->link=NULL;
	
	if(root ==NULL)
	{
		root=temp;
	}
	else{
		struct node* p;
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
	
	
	
}

int length()
{
	c=0;
	struct node* temp;
	temp=root;
	while(temp!=NULL)
	{
		c++;
		temp=temp->link;
		
	}
	return c;
	
}

void display()
{
	struct node* temp;
	temp=root;
	if(temp==NULL)
	printf("list is empty");
	else{
		
		while(temp!=NULL)
	     {
		printf("%d\n",temp->data);
		temp=temp->link;
		
	    }
		
		
		
	}
	
	
}

void deletee(void)
{
	struct node* temp;

	printf("enter position: ");
	scanf("%d",&loc);
	c=length();
	if(loc>=c)
	{
		printf("invalid pos");
		getch();
		
	}
	else if(loc==1)
	{
		temp=root;
		root=temp->link;
		temp->link=NULL;
		free(temp);
		
	}
	else 
	{
		struct node* p=root,*q; 
		int i=1;
		while(i<loc-1)
		{
			p=p->link;
			i++;
			
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
	}
	
	
	
	
}

void addatbegin()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	
	printf("enter node data: ");
	scanf("%d", &temp->data);
		temp->link=NULL;
	
	if(root ==NULL)
	{
		root=temp;
	}
	else{
		
		temp->link=root;
		root=temp;
		
		
	}
	
	
}

void addatafter()
{
	
}
