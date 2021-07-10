//stack implementation using array

#include<stdio.h>
#include<conio.h>
#define SIZE 5

void push(int n);
int pop(void);
int isfull(void);
int isempty(void);
void traverse(void);
void peek(void);



int arr[SIZE],top=-1;
int ch;
int n,i;
int main(void)
{
	while(1)
	{
		system("cls");
		printf("<=stack operation=>\n");
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.peek\n");
		printf("4.traverse\n");
		printf("5.exit\n");
		printf("choice one thing\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter number\n");
				scanf("%d",&n);
				push(n);
				getch();
				break;
			case 2:
				n=pop();
				if(n==0)
				{
					printf("stack is empty\n");
				}
				else{
					printf("popped items is %d\n",n);
				}
				getch();
				break;
				
			case 3:
				peek();
				getch();
				break;
				
			case 4:traverse();
			getch();
			break;
				
			case 5:
				exit(0);
			default:
				printf("invalid input: ");
				
			
			
		}
		
	}
	
	
	
	
}

void push(int n)
{
	if(isfull())
	{
		printf("stack is full\n");
		return;
	}
	else{
		top++;
		arr[top]=n;
		printf("%d pushed\n",n);
	}
	
}

int isfull()
{
	if(top==SIZE-1)
	{
		return 1;
	}
	else{
		return 0;
	}
		
}

int pop()
{
	if(isempty())
	{
		return 0;
	}
	else{
		return arr[top--];
	}
	
	
}

int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else{
		return 0;
	}
		
}

void peek()
{
	if(isempty())
	{
		printf("stack  is empty\n");
	}
	else{
		printf("peek elemet is %d",arr[top]);
	}
	
	
}

void traverse()
{
	if(isempty())
	{
		printf("stack  is empty\n");
	}
	else{
		printf("stack elements are\n");
		for(i=0;i<=top;i++)
		{
			printf("%d\n",arr[i]);
		}
	}
	
	
	
}



