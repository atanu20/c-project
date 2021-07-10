#include<stdio.h>
#include<stdlib.h>

typedef struct cirdouble{
	
	int x;
	struct cirdouble *next;
	struct cirdouble *prev;
	
}cdl;

cdl *start=NULL;
int ele;

void create_cdl(cdl *);
void display_cdl(cdl *);
void insert_beg_cdl(cdl *);
void insert_end_cdl(cdl *);
void delete_beg_cdl(cdl *);
void delete_end_cdl(cdl *);
void delete_bef_cdl(cdl *);	//*
void delete_after_cdl(cdl *);	//*
void insert_after_cdl(cdl *);
void insert_bef_cdl(cdl *);	//*
void del_any(cdl *);




int main()
{
	int ch;
	while(1)
	{
		system("cls");
		printf("Circular Double linked list\n");
		printf("1.create list\n");
		printf("2.insert begening\n");
		printf("3.insert end\n");
		printf("4.delete beg\n");
		printf("5.delete end\n");
		printf("6.insert after\n");
		printf("7.insert before\n");
		printf("8.display\n");
		printf("9.delete after\n");
		printf("10.delete before\n");
		printf("11.del any node\n");
		printf("enter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			
			case 1:
//			start=(cdl *)malloc(sizeof(cdl));
				create_cdl(start);
				getch();
				break;
				
			case 2:
				insert_beg_cdl(start);
				getch();
				break;
			
			case 3:
				insert_end_cdl(start);
				getch();
				break;
			case 4:
				delete_beg_cdl(start);
			
				getch();
				break;
				
			case 5:
				delete_end_cdl(start);
				getch();
				break;
				
			case 6:
				insert_after_cdl(start);
				getch();
				break;
			case 7:
				insert_bef_cdl(start);
				getch();
				break;
			case 9:
				delete_after_cdl(start);
				getch();
				break;
			case 10:
				delete_bef_cdl(start);
				getch();
				break;
			case 8:
				display_cdl(start);
				getch();
				break;
			case 11:
				del_any(start);
				getch();
				break;
			default:
				printf("invalid input\n");
				getch();
				exit(0);
		}
	}
}

void create_cdl(cdl *ptr)
{
	cdl *new_node;
	int num;
	printf("Enter number (press -1 to exit): ");
	scanf("%d",&num);
	while(num!=-1)
	{
			if(start == NULL)
			{
				new_node = (cdl *)malloc(sizeof(cdl));
				 start = new_node;
				
				new_node -> prev = start;
				new_node -> x = num;
				new_node -> next = start;
			}
			else{
					
				ptr=start;
				while(ptr->next!=start)
				{
					ptr=ptr->next;
				}
				
				new_node = (cdl *)malloc(sizeof(cdl));
					new_node -> x = num;
					new_node ->next=start;
					new_node ->prev=ptr;
					ptr->next=new_node;
					start->prev=new_node;
				
				
				
			}
			
			printf("Enter number (press -1 to exit): ");
	scanf("%d",&num);
		
	}
	
	

}

void insert_beg_cdl(cdl *ptr){
	cdl *new_node;
	int num;
	printf("enter number: ");
	scanf("%d",&num);
	new_node = (cdl *)malloc(sizeof(cdl));
	new_node -> x = num;
	
	while(ptr->next!=start)
	{
		ptr=ptr->next;
	}
	
	new_node->next=start;
	new_node->prev=ptr;
	ptr->next=new_node;
	start->prev=new_node;
	start=new_node;
	return(start);
	
	
}

void insert_end_cdl(cdl *ptr){
	cdl *new_node;
	int num;
	printf("enter number: ");
	scanf("%d",&num);
	new_node = (cdl *)malloc(sizeof(cdl));
	new_node -> x = num;
	
	while(ptr->next!=start)
	{
		ptr=ptr->next;
	}
	new_node->next=start;
	new_node->prev=ptr;
	ptr->next=new_node;
	start->prev=new_node;
	
}

void delete_beg_cdl(cdl *ptr)
{
	cdl *ptr1;
	
	if(start==NULL)
	{
		printf("underflow\n");
		return;
	}
	else if(start->next==start)
	{
		start=NULL;
		free(start);
			printf("delete successfully\n");
	}
	else{
//		ptr=start;
		while(ptr->next!=start)
		{
			ptr=ptr->next;
		}
		ptr1=ptr->next;
		ptr->next=start->next;
		start->next->prev=ptr;
		start=start->next;
		free(ptr1);
			printf("delete successfully\n");
		
	}
	
}

void delete_end_cdl(cdl *ptr){
	cdl *ptr1;
	
	if(start==NULL)
	{
		printf("underflow\n");
		return;
		
	}
	else if(start->next==start)
	{
		start=NULL;
		free(start);
			printf("delete successfully\n");
	}
	else{
//		ptr=start;
ptr1=ptr->next;
		while(ptr1->next!=start)
		{
			ptr=ptr1;
			ptr1=ptr1->next;
		}
		ptr->next=start;
		start->prev=ptr;
		free(ptr1);
			printf("delete successfully\n");
		
	}
	
	
	
}

void delete_after_cdl(cdl *ptr)
{
	cdl *ptr1;
	
    if(start==NULL)
	{
		printf("underflow\n");
		return;
		
	}
	printf("Enter the element after which you want to delete:");
    scanf("%d",&ele);
	
    do
    {
    	if(ptr->x==ele)
    	{
    		if(ptr->next==start)//this loop not work????
    		{
    		printf("no elemunt present after ");
    		printf("%d",ele);
			}
			else{
				ptr1=ptr->next;
				
				ptr1->next->prev=ptr;
				ptr->next=ptr1->next;
				free(ptr1);
					printf("delete successfully\n");
			
			}
		}
		
		ptr=ptr->next;
	}while(ptr!=start);
	
	
}

void delete_bef_cdl(cdl *ptr)
{
	cdl *ptr1;
	
    if(start==NULL)
	{
		printf("underflow\n");
		return;
		
	}
	printf("Enter the element before which you want to delete:");
    scanf("%d",&ele);
	
    do
    {
    	if(ptr->x==ele)
    	{
    		
				ptr1=ptr->prev;
				ptr->prev=ptr1->prev;
				ptr1->prev->next=ptr;
				
				free(ptr1);
					printf("delete successfully\n");
		
			
		}
		ptr=ptr->next;
	}while(ptr!=start);
	
	
}


void display_cdl(cdl *ptr)
{
	if(start==NULL)
	{
		printf("Underflow\n");
	
	}
	else{
			while(ptr->next!=start)
	{
		printf("%d->",ptr->x);
		ptr=ptr->next;
	}
	 do
      {
        printf("%d->",ptr->x);
        ptr=ptr->prev;
      }while(ptr!=start);
	printf("%d->",ptr->x);
	printf("NULL");
	}
	
		
	
	
}

void insert_bef_cdl(cdl *ptr)
{
	cdl *new_node;
	int num;
	
	
	
	if(start==NULL)
	{
		printf("underflow\n");
		return;
		
	}
	printf("Enter the element before which you want to insert:");
    scanf("%d",&ele);
	
	
	
	do
	{
			if(ptr->x==ele)
    	{
    		
    			if(ptr->prev==start)
    			{
    				insert_beg_cdl(ptr);
    			
				
					
				}
    		
    		
    		else{
    			printf("enter number: ");
			scanf("%d",&num);
			new_node = (cdl *)malloc(sizeof(cdl));
			new_node -> x = num;
			
		
			new_node->next=ptr;
			new_node->prev=ptr->prev;
			
			ptr->prev->next=new_node;
			
		
			ptr->prev=new_node;
			}
		
			
    		
    		
        }
		
		
		ptr=ptr->next;
	}while(ptr!=start);
	
//	return (start);
	
}

void insert_after_cdl(cdl *ptr)
{
	cdl *new_node;
	int num;
	
	
	
	if(start==NULL)
	{
		printf("underflow\n");
		return;
		
	}
	printf("Enter the element after which you want to insert:");
    scanf("%d",&ele);
	
	
	
	do
	{
			if(ptr->x==ele)
    	{
    		printf("enter number: ");
			scanf("%d",&num);
			new_node = (cdl *)malloc(sizeof(cdl));
			new_node -> x = num;
			
			new_node->next=ptr->next;
			new_node->prev=ptr;
			ptr->next->prev=new_node;
			ptr->next=new_node;
		
			
    		
    		
        }
		
		
		ptr=ptr->next;
	}while(ptr!=start);
}



void del_any(cdl *ptr)
{
	printf("Enter the element  which you want to delete:");
    scanf("%d",&ele);
    if(ptr->x==ele)
    {
    	delete_beg_cdl(ptr);
    	
	}
	else{
		while(ptr->x!=ele)
		{
			ptr=ptr->next;
		}
		ptr->prev->next=ptr->next;
		ptr->next->prev=ptr->prev;
		free(ptr);
	}
}





