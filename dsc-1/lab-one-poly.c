//implementation of polynomial(add two polynomial)

#include <stdio.h>
#include <stdlib.h>

typedef struct poly
{
int expo;
int coeff;
struct poly *next;
}pn;

pn *start1=NULL;
pn *start2=NULL;
pn *start3=NULL;
pn *start4=NULL;
pn *create_poly(pn*);
pn *display_poly(pn*);
pn *add_poly(pn*,pn*,pn*);
pn *add_node(pn*,int,int);


pn *sort(pn*);

int e,c;






int main()
{
	int option;
	while(1)
	{
		system("cls");
		printf("\n***~ MAIN MENU ~***");
		printf("\n 1. Enter the first polynomial");
		printf("\n 2. Display the first polynomial");
		printf("\n 3. Enter the second polynomial");
		printf("\n 4. Display the second polynomial");
		printf("\n 5. Add the polynomials");
		printf("\n 6. Display the result");
	
		printf("\n 7. EXIT");
		printf("\n\n Enter your option : ");
		scanf("%d", &option);
		
		switch(option)
	{
	case 1: start1 = create_poly(start1);
		getch();
		break;
	case 2: printf("\n POLYNOMIAL 1:\n");
		start1 = display_poly(start1);
		getch();
		break;
	case 3: start2 = create_poly(start2);
		getch();
		break;
	case 4: printf("\n POLYNOMIAL 2:\n");
		start2 = display_poly(start2);
		getch();
		break;
	case 5: start3 = add_poly(start1,start2,start3);
		printf("poly1 and poly2 added successfully");
		getch();
		break;
	case 6: printf("\n (POLYNOMIAL 1 + POLYNOMIAL 2):\n");
		start3 = display_poly(start3);
		getch();
		break;

	default:printf("\n your choice is wrong");
		getch();
		exit(0);
		
		}
	}
}

















pn *create_poly(pn *start)
{ pn *new_node,*ptr;

printf("\n ENTER its COEFFICIENT(enter -1 for exit):");
scanf("%d",&c);
printf("\n ENTER THE EXPONENT:");
scanf("%d",&e);
while(c != -1)
{
if(start==NULL)
{
	new_node=(pn*)malloc(sizeof(pn));
	new_node->coeff=c;
	new_node->expo=e;
	new_node->next=NULL ;
	start=new_node;
}
else
{
	ptr=start;
	while(ptr->next!=NULL)
	{
	ptr=ptr->next;
	}
	new_node=(pn*)malloc(sizeof(pn));
	new_node->coeff=c;
	new_node->expo=e;
	new_node->next=ptr->next;
	ptr->next=new_node;
	}
	printf("\n ENTER THE COEFFICIENT(enter -1 for exit):");
	scanf("%d",&c);
	if(c==-1)
	break;
	printf("\n ENTER its EXPONENT:");
	scanf("%d",&e);
}
return start;
}



pn *display_poly(pn *start)
{ sort(start);
	pn *ptr;
	ptr=start;
while(ptr!=NULL)
{
	printf("(%dx^%d)",ptr->coeff,ptr->expo);
	ptr=ptr->next;
	if(ptr!=NULL)
	printf("+");

}

return start;
}





pn *add_poly(pn *start1,pn *start2,pn *start3)
{
	pn *ptr1,*ptr2;
	int sum_coeff;
	ptr1=start1;
	ptr2=start2;
while(ptr1!=NULL && ptr2!=NULL)
{
	if(ptr1->expo == ptr2->expo)
	{
		sum_coeff = ptr1->coeff + ptr2->coeff;
		start3 = add_node(start3,sum_coeff,ptr1->expo);
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	else if(ptr1->expo > ptr2->expo)
	{
		start3 = add_node(start3,ptr1->coeff,ptr1->expo);
		ptr1 = ptr1->next;
	}
	else if(ptr1->expo < ptr2->expo)
	{
		start3 = add_node(start3,ptr2->coeff,ptr2->expo);
		ptr2 = ptr2->next;
	}
}

	
	if(ptr1==NULL)
	{
		while(ptr2!=NULL)
		
		{
		start3 = add_node(start3,ptr2->coeff,ptr2->expo);
		ptr2 = ptr2->next;
		}
	}

	if(ptr2==NULL)
	{
		while(ptr1!=NULL)
		{
		start3 = add_node(start3,ptr1->coeff,ptr1->expo);
		ptr1=ptr1->next;
		}
	}
return start3;
}




pn *add_node(pn *start,int c,int e)
{ pn *new_node,*ptr;

if(start==NULL)
{
new_node=(pn*)malloc(sizeof(pn));
new_node->coeff=c;
new_node->expo=e;
new_node->next=NULL ;
start=new_node;
}
else
{
ptr=start;
while(ptr->next!=NULL)
{

ptr=ptr->next;
}
new_node=(pn*)malloc(sizeof(pn));
new_node->coeff=c;
new_node->expo=e;
new_node->next=ptr->next;
ptr->next=new_node;
}

return start;
}




pn *sort(pn *start)
{ pn *ptr1,*ptr;
ptr=start;

while(ptr)
{ptr1=ptr->next;
	
	while(ptr1)
	{
	if(ptr->expo < ptr1->expo){
	int temp,temp1;
	temp=ptr->expo;
	ptr->expo=ptr1->expo;
	ptr1->expo=temp;
	
	temp1=ptr->coeff;
	ptr->coeff=ptr1->coeff;
	ptr1->coeff=temp1;
	}
	ptr1=ptr1->next;
	}
ptr=ptr->next;
 }
return (start);
}

