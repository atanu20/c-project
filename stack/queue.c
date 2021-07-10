#include<stdio.h>
#define SIZE 5
void insert(void);
void deletee(void);
void display(void);

int ch;
int i;
int n;
front=0;
rear=0;
int queue[SIZE];

int main()
{
	while(1)
	{
		system("cls");
		printf("\n\n\tQueue\n");
		printf("\t1.insert\n");
		printf("\t2.delete\n");
		printf("\t3.display\n");
		printf("\t4.exit\n");
		printf("\tenter choice:");
		scanf("\t%d",&ch);
		switch(ch)
		{
			case 1:
				insert();
				getch();
				break;
			case 2:
				deletee();
				getch();
				break;
			case 3:
			   display();
			   getch();
			   break;
			case 4:
				exit(0);
			default:
				printf("\tinvalid input ");
				getch();
		}
	}
}

void insert()
{
	if(SIZE==rear)
	{
		printf("\tqueue is full\n");
	}
	else{
		
		//rear=n;
		printf("enter no:");
		scanf("%d",&n);
		queue[rear]=n;
		rear++;
	}
	
}

void deletee()
{
		if(front==rear)
	{
		printf("\tqueue is empty\n");
	}
	else
	{
		printf("deleted element %d",queue[front]);
		for(i=0;i<rear-1;i++)
		{
			queue[i]=queue[i+1];
		}
		rear--;
	}
	
}

void  display()
{
		if(front==rear)
	{
		printf("\tqueue is empty\n");
	}
	else
	{
		printf("queue elements are \n");
		for(i=front;i<rear;i++)
		{
			printf("%d\n",queue[i]);
		}
	}
	
}



