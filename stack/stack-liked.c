#include<stdio.h>
#include<stdlib.h>


void push(void);
void pop(void);
void display(void);
void peek(void);
int length(void);
void swap(void);



struct node{
	int data;
	struct node* link;
	
};
struct node* top=NULL;

int ch;
int c=0;



int main()
{
	
	while(1)
	{
		system("cls");
		printf("\n\n\t stack singel linked list\n");
		printf("\t1.push\n");
		printf("\t2.pop\n");
		printf("\t3.display\n");
		printf("\t4.peek\n");
		printf("\t5.length\n");
		printf("\t6.swap\n");
		printf("\t7.exit\n\n");
	
		printf("\t\tenter choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				getch();
				break;
			case 2:
				pop();
				getch();
				break;
			case 3:
				display();
				getch();
				break;	
				
				
			case 4:
				peek();
				getch();
				break;
			case 5:
			c=length();
			printf("total elements are %d",c);
			getch();
			break;
			
			case 6:
				swap();
				getch();
				break;
				
			case 7:
				exit(0);
			default:
				printf("\tinvalid input");
				getch();
				
		}
	}
	
	
}

void push()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\t\tenter number: ");
	scanf("%d",&temp->data);
	temp->link=top;
	top=temp;
	
}


void pop()
{
	struct node* temp;
	if(top==NULL)
	{
		printf("\tno data");
	}
	else{
		temp=top;
		printf("\tpopped value is %d",temp->data);
		top=top->link;
		temp->link=NULL;
		free(temp);
		
	}
	
	
}

void display()
{
	struct node* temp;
	if(top==NULL)
	{
		printf("\tno data");
	}
	else{
		temp=top;
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->link;
		}
	}
	
}

void peek()
{
	struct node* temp;
	if(top==NULL)
	{
		printf("\tno data");
	}
	else{
		temp=top;
		printf("peek value is %d",temp->data);
		
	}
	
}

int length()
{
	c=0;
	struct node* temp;
	temp=top;
	while(temp!=NULL)
	{
		c++;
		temp=temp->link;
		
	}
	return c;
	
	
}

void swap()
{
	int pos,i=1;
	struct node* temp;
	
	printf("enter position: ");
	scanf("%d",&pos);
	c=length();
	if(pos>c)
	{
		printf("invalid position");
	printf("\ntotal elements no is %d",c);
	}
	else{
		struct node *p,*q,*r;
		p=top;
		while(i<pos-1)
		{
			p=p->link;
			i++;
		}
		q=p->link;
		r=q->link;
		q->link=r->link;
		//r->link=p->link;
		//p->link=q->link;
		r->link=q;
		p->link=r;
		
	}
	
	
}



