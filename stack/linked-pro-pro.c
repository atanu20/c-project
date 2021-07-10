#include<stdio.h>
#include<stdlib.h>

void append(void);
int length(void);
void display(void);
void addatfirst(void);
void addatposition(void);
void deletee(void);
//void swap(void);
void sort(void);
void reverse(void);



typedef struct node{
	int data;
	struct node* link;
}L;

L  * root=NULL;

int ch;
int n;
int c=0;




int main(void)
{
	
	while(1)
	{
		system("cls");
		printf("Singel linked list operation:\n");
		printf("1.append\n");
		printf("2.add at first\n");
		printf("3.add at position\n");
		printf("4.display\n");
		printf("5.delete\n");
		printf("6.length\n");
		printf("7.sort\n");
		printf("8.reverse\n");
		printf("9.exit\n");
		printf("enter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				
				append();
				getch();
				break;
			case 2:
				addatfirst();
				getch();
				break;
			case 3:
			addatposition();
				getch();
				break;
			case 4:
				display();
				getch();
				break;
			case 5:
				deletee();
				getch();
				break;
			case 6:
				c=length();
				printf("length is %d",c);
				getch();
				break;
			case 7:
				sort();
				getch();
				break;
			case 8:
				reverse();
				getch();
				break;
				
			case 9:
				exit(0);
			default:
				printf("invalid input");
				getch();
				
				
		}
	}
	
	
}

void append()
{
	L  * temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter node: ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	   if(root==NULL)
	   {
	   	root=temp;
	   }
	   else{
	   	L  * p;
	   	p=root;
	   	while(p->link!=NULL)
	   	{
	   		p=p->link;
	   		
		   }
		   p->link=temp;
		   temp->link=NULL;
	   	
	   	 
	   	 
	   }
}

int length()
{
	c=0;
	L  * temp;
	temp=root;
	
	while(temp!= NULL)
	{
		c++;
		temp=temp->link;
		
	}
	return c;
}

void display()
{
	L  * temp;
	temp=root;
	if(temp==NULL)
	{
		printf("no data\n");
		
	}
	else{
		while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;
		
	}
	printf("NULL");
	}
	
	
	
}

void addatfirst()
{
	L  * temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter new node: ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(root==NULL)
	{
		root=temp;
	}
	else{
		temp->link=root;
		root=temp;
	}
	
	
	
}


void addatposition()
{
	int pos,i=1;
	L  * temp;
	L  * p;
	up:
	printf("enter position: ");
	scanf("%d",&pos);
	c=length();
	if(pos>c+1)
	{
		printf("invalid position");
	printf("\ntotal elements no is %d\n",c);
	getch();
	goto up;
	}

	else{
		
		p=root;
		while(i<pos-1)
		{
			p=p->link;
			i++;
			
		}
		
		
	}
	
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter new node: ");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	
	temp->link=p->link;
	p->link=temp;
	
}

void deletee()
{
	int pos,i=1;
	L  * temp;
	
	printf("enter position: ");
	scanf("%d",&pos);
	c=length();
	if(pos>c)
	{
		printf("invalid position");
	printf("\ntotal elements no is %d",c);
	}
	else if(pos==1)
	{
		
		temp=root;
		root=temp->link;
		temp->link=NULL;
		free(temp);
		
		
	}
	else{
		L  * p=root,* q;
		//p=root;
		while(i<pos-1)
		{
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
		printf("delete successfullt\n");
	}
	getch();
	system("cls");
	main();
	
}


//void swap()
//{
//	int pos,i=1;
//	struct node* temp;
//	
//	printf("enter position: ");
//	scanf("%d",&pos);
//	c=length();
//	if(pos>c)
//	{
//		printf("invalid position");
//	printf("\ntotal elements no is %d",c);
//	}
//	else{
//		struct node *p,*q,*r;
//		p=root;
//		while(i<pos-1)
//		{
//			p=p->link;
//			i++;
//		}
//		q=p->link;
//		r=q->link;
//		q->link=r->link;
//		//r->link=p->link;
//		//p->link=q->link;
//		r->link=q;
//		p->link=r;
//		
//	}
//	
//	
//}


void sort(void)
{
L *q,*p;
int data;
q=root;
while(q!=NULL)
{
p=q->link;
while(p!=NULL)
{
if(q->data>p->data)
{
data=q->data;
q->data=p->data;
p->data=data;
}
p=p->link;
}
q=q->link;
}
}




void reverse(void)
{
	struct node *p,*q;
	int i,j,k,len,temp;
	i=0;
	len=length();
	j=len-1;
	p=q=root;
	while(i<j)
	{
		k=0;
		while(k<j)
		{
			q=q->link;
			k++;
		}
		temp=p->data;
		p->data=q->data;
		q->data=temp;
		i++;
		j--;
		p=p->link;
		q=root;
	}
	
}
