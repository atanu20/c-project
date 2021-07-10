#include<stdio.h>
#include<stdlib.h>


void insert(void);
void display(void);
int length(void);
void pop(void);
void addatposition(void);
void addfirst(void);


struct node{
	int data;
	struct node* right;
	struct node* left;
};

struct node* root=NULL;

int ch,c=0;

int main()
{
	while(1)
	{
		system("cls");
		printf("\n\tDouble linked list\n");
		printf("\t1.insert\n");
		printf("\t2.pop\n");
		printf("\t3.display\n");
		printf("\t4.length\n");
		printf("\t5.add at position\n");
		printf("\t6.add at first\n");
		printf("\t7.exit\n");
		printf("enter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
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
				c=length();
				printf("length is %d",c);
				getch();
				break;
			case 5:
				addatposition();
				getch();
				break;
			case 6:
				addfirst();
				getch();
				break;
			case 7:
				exit(0);
			default:
				printf("invlid input");
				getch();
		}
		
	}
	
}


void insert()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter no: ");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;

	if(root==NULL)
	{
		root=temp;
	}
	else{
		struct node* p;
		p=root;
		while(p->right!=NULL)
		{
			p=p->right;
			
		}
		p->right=temp;
		temp->left=p;
		temp->right=NULL;
	}
	
}

void display()
{
	struct node* temp;
	temp=root;
	if(temp==NULL)
	{
		printf("no data\n");
		
	}
	else{
		while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->right;
		
	}
	}
	
	
	
}




int length()
{c=0;
	struct node* temp;
	temp=root;
	if(temp==NULL)
	{
		printf("no data\n");
	}
	else{
		while(temp!=NULL)
	{
		c++;
		temp=temp->right;
		
	}
	
	}
	return c;
}

void pop()
{


	int pos,i=1;
	struct node* temp;
	up1:
	printf("\nenter position: ");
	scanf("%d",&pos);
	c=length();
	 if(pos>c)
	{
		printf("\tinvalid position");
	printf("\n\ttotal elements no is %d\n",c);
	getch();
	goto up1;
	}
	else if(pos==0)
	{
		
		temp=root;
		root=temp->right;
		temp->right->left=NULL;
		temp->right=NULL;
		
		free(temp);
		printf("delete successfullt\n");
		
	}
	else if(pos==c){
		struct node* p=root,* q;
		while(i<pos-1)
		{
			p=p->right;
			i++;
		}
		q=p->right;
		q->left=NULL;
		p->right=NULL;
			free(q);
		printf("delete successfullt\n");
		
		
	}
	else{
		struct node* p=root,* q;
		//p=root;
		while(i<pos-1)
		{
			p=p->right;
			i++;
		}
		q=p->right;
		p->right=q->right;
		q->right->left=p;
		q->left=NULL;
		q->right=NULL;
		free(q);
		printf("delete successfullt\n");
	}
	getch();
	system("cls");
	main();


}



void addatposition()
{
	int pos,i=1;
	struct node* temp;
	struct node* p;
	up:
	printf("enter position: ");
	scanf("%d",&pos);
	c=length();
	if(pos>c)
	{
		printf("invalid position");
	printf("\ntotal elements no is %d\n",c);
	getch();
	goto up;
	}
	else if(pos==c)
	{
		insert();
		getch();
	}

	else{
		
		p=root;
		while(i<pos)
		{
			p=p->right;
			i++;
			
		}
		
		
	
	
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter new node: ");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	
	
	temp->right=p->right;
	p->right->left=temp;
	temp->left=p;
	p->right=temp;
}
		
}
void addfirst()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter new node: ");
	scanf("%d",&temp->data);
	temp->right=NULL;
	temp->left=NULL;
	
	if(root==NULL)
	{
		root=temp;
	}
	else{
		temp->right=root;
		root->left=temp;
		root=temp;
	}
}


