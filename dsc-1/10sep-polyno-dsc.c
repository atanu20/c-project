#include <stdio.h>
#include<stdlib.h>
#include <conio.h>


typedef struct node
{
int num;
int coeff;
struct node *next;
}pn;
pn *start1=NULL;
pn *start2=NULL;
pn *start3=NULL;
pn *start4=NULL;
pn *create_poly(pn *);
pn *display_poly(pn *);
pn *add_poly(pn *, pn *, pn *);
pn *add_node(pn *, int , int );
pn *sub_poly(pn *, pn *, pn *);




int main()
{
	int option;
	while(1)
	{
		system("cls");
		printf("\n*** MAIN MENU ***");
		printf("\n 1. Enter the first polynomial");
		printf("\n 2. Display the first polynomial");
		printf("\n 3. Enter the second polynomial");
		printf("\n 4. Display the second polynomial");
		printf("\n 5. Add the polynomials");
		printf("\n 6. Display the result");
		printf("\n 7. Subtract the polynomials");
		printf("\n 8. Display the result");
		printf("\n 9. EXIT");
		printf("\n\n Enter your option : ");
		scanf("%d", &option);
		switch(option)
		{
		case 1:
		 		start1 = create_poly(start1);
				getch();
		            break;
		case 2: start1 = display_poly(start1);
					getch();
		            break;
		case 3: start2 = create_poly(start2);
					getch();
		            break;
		case 4: start2 = display_poly(start2);
					getch();
		            break;
		case 5: start3 = add_poly(start1, start2, start3);
					getch();
		            break;
		case 6: start3 = display_poly(start3);
					getch();
		            break;
		case 7: start4 = sub_poly(start1, start2, start4);
					getch();
		            break;
		case 8: start4 = display_poly(start4);
					getch();
		            break;
		            
		default:
			printf("Invalid input");
			getch();
			exit(0);
		}
		
	}
}





pn *create_poly(pn *start)
{
pn *new_node,*ptr;
int n, c;
printf("Enter -1 to exit");
printf("\n Enter the number : ");
scanf("%d", &n);
printf("\t Enter its coefficient : ");
scanf("%d", &c);
while(n != -1)
     {
               if(start==NULL)
                      {
                             new_node = (pn *)malloc(sizeof(pn));
                             new_node -> num = n;
                             new_node -> coeff = c;
                             new_node -> next = NULL;
                             start = new_node;
                       }
               else
                      {
                      	    ptr=start;
                            while(ptr -> next != NULL)
                                      ptr = ptr -> next;
                            new_node = (pn *)malloc(sizeof(pn));
                            new_node -> num = n;
                            new_node -> coeff = c;
                            new_node -> next = NULL;
                            ptr -> next = new_node;
                      }
              printf("\n Enter the number : ");
              scanf("%d", &n);
              if(n == -1)
                     break;
              printf("\t Enter its coefficient : ");
              scanf("%d", &c);
     }
return start;
}
pn *display_poly(pn *start)
{   
    pn *ptr;
    ptr=start;
    while(ptr != NULL)
              {
                  printf("(%dx^%d)", ptr -> num, ptr -> coeff);
                  ptr = ptr -> next;
                  if(ptr!=NULL)
                  printf("+");
               }
return start;
}
pn *add_poly(pn *ptr1, pn *ptr2, pn *start3)
{
   int sum_num, c;
   while(ptr1 != NULL && ptr2 != NULL)
            {
                         if(ptr1 -> coeff == ptr2 -> coeff)
                               {
                                    sum_num = ptr1 -> num + ptr2 -> num;
                                    start3 = add_node(start3, sum_num, ptr1 -> coeff);
                                    ptr1 = ptr1 -> next;
                                    ptr2 = ptr2 -> next;
                                 }
                          else if(ptr1 -> coeff > ptr2 -> coeff)
                               {
                                     start3 = add_node(start3, ptr1 -> num, ptr1 -> coeff);
                                     ptr1 = ptr1 -> next;
                                }
                          else if(ptr1 -> coeff < ptr2 -> coeff)
                                {
                                    start3 = add_node(start3, ptr2 -> num, ptr2 -> coeff);
                                    ptr2 = ptr2 -> next;
                                 }
                 }
if(ptr1 == NULL)
         {
               while(ptr2 != NULL)
                     {
                          start3 = add_node(start3, ptr2 -> num, ptr2 -> coeff);
                           ptr2 = ptr2 -> next;
                      }
            }
if(ptr2 == NULL)
        {
              while(ptr1 != NULL)
                    {
                            start3 = add_node(start3, ptr1 -> num, ptr1 -> coeff);
                         ptr1 = ptr1 -> next;
                     }
         }
return start3;
}
pn *sub_poly(pn *ptr1, pn *ptr2, pn *start4)
{
  int sub_num, c;
  do
          {
                if(ptr1 -> coeff == ptr2 -> coeff)
                          {
                             sub_num = ptr1 -> num - ptr2 -> num;
                             start4 = add_node(start4, sub_num, ptr1 -> coeff);
                             ptr1 = ptr1 -> next;
                             ptr2 = ptr2 -> next;
                          }
               else if(ptr1 -> coeff > ptr2 -> coeff)
                       {
                           start4 = add_node(start4, ptr1 -> num, ptr1 -> coeff);
                           ptr1 = ptr1 -> next;
                        }
               else if(ptr1 -> coeff < ptr2 -> coeff)
                       {
                           start4 = add_node(start4, -(ptr2 -> num), ptr2 -> coeff);
                           ptr2 = ptr2 -> next;
                        }
             }while(ptr1 != NULL && ptr2 != NULL);
     if(ptr1 == NULL)
                {
                        while(ptr2 != NULL)
                              {
                                  start4 = add_node(start4, -(ptr2 -> num), ptr2 -> coeff);
                                  ptr2 = ptr2 -> next;
                               }
                 }
    if(ptr2 == NULL)
               {
                      while(ptr1 != NULL)
                         {
                                   start4 = add_node(start4, ptr1 -> num, ptr1 -> coeff);
                                   ptr1 = ptr1 -> next;
                           }
                     }
return start4;
}

pn *add_node(pn *start, int n, int c)
{
pn *new_node,*ptr;
if(start == NULL)
{
        new_node = (pn *)malloc(sizeof(pn));
        new_node -> num = n;
        new_node -> coeff = c;
        new_node -> next = NULL;
        start = new_node;
}
else
 {  
     ptr=start;
     while(ptr -> next != NULL)
               ptr = ptr -> next;
     new_node = (pn *)malloc(sizeof(pn));
     new_node -> num = n;
     new_node -> coeff = c;
     new_node -> next = ptr->next;
     ptr -> next = new_node;
}
return start;
}


