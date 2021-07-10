#include <stdio.h>
#include <conio.h>

typedef struct node
{
int data;
struct node *next;
}cl;
cl *head = NULL;
cl *create(cl *);
cl *display(cl *);
cl *insert_beg(cl *);
cl *insert_end(cl *);
cl *delete_beg(cl *);
cl *delete_end(cl *);
cl *delete_after(cl *);









int main()
{
int option;

do
{

printf("\n\n *****MAIN MENU *****");
printf("\n\n operation in Circuler linked list\n");

printf("\n 1: Create a list");
printf("\n 2: Display the list");
printf("\n 3: Add a node at the beginning");
printf("\n 4: Add a node at the end");
printf("\n 5: Delete a node from the beginning");
printf("\n 6: Delete a node from the end");
printf("\n 7: Delete a node after a given node");

printf("\n 8: EXIT");
printf("\n\n Enter your option : ");
scanf("%d", &option);
system("cls");
switch(option)
{
case 1: head = create(head);
printf("\n CIRCULAR LINKED LIST CREATED");
break;
case 2:
	printf("CIRCULER LINKED IS\n");
 head = display(head);

break;
case 3: head = insert_beg(head);
break;
case 4: head = insert_end(head);
break;
case 5: head = delete_beg(head);
printf("Delete successfully from first position\n");
break;
case 6: head = delete_end(head);
printf("Delete successfully from end position\n");
break;
case 7: head = delete_after(head);
break;

default: exit(0);
}
}while(option !=8);
getch();
return 0;
}



cl *create(cl *start)
{
cl *new_node, *ptr;
int num;
printf("\n Enter -1 to end");
printf("\n Enter the data : ");
scanf("%d", &num);
while(num != -1)
{
new_node = (cl *)malloc(sizeof(cl));
new_node -> data = num;

if(start == NULL)
{
new_node -> next = new_node;
start = new_node;
}
else
{ ptr = start;
while(ptr -> next != start)
ptr = ptr -> next;
ptr -> next = new_node;
new_node -> next = start;
}
printf("\n Enter the data : ");
scanf("%d", &num);
}
return start;
}

cl *display(cl *start)
{
cl *ptr;
ptr=start;
while(ptr -> next != start)
{
printf("\t %d ->", ptr -> data);
ptr = ptr -> next;
}
printf("\t %d", ptr -> data);
return start;
}



cl *insert_beg(cl *start)
{
cl *new_node, *ptr;
int num;
printf("\n Enter the data : ");
scanf("%d", &num);
new_node = (cl *)malloc(sizeof(cl));
new_node -> data = num;
ptr = start;
while(ptr -> next != start)
ptr = ptr -> next;
ptr -> next = new_node;
new_node -> next = start;
start = new_node;
return start;
}


cl *insert_end(cl *start)
{

cl *ptr, *new_node;
int num;
printf("\n Enter the data : ");
scanf("%d", &num);
new_node = (cl *)malloc(sizeof(cl));
new_node -> data = num;
ptr = start;
while(ptr -> next != start)
ptr = ptr -> next;
ptr -> next = new_node;
new_node -> next = start;
return start;
}




cl *delete_beg(cl *start)
{
cl *ptr;
ptr = start;
while(ptr -> next != start)
ptr = ptr -> next;
ptr -> next = start -> next;
free(start);
start = ptr -> next;
return start;
}


cl *delete_end(cl *start)
{
cl *ptr, *preptr;
ptr = start;
while(ptr -> next != start)
{
preptr = ptr;
ptr = ptr -> next;
}
preptr -> next = ptr -> next;
free(ptr);
return start;
}




cl *delete_after(cl *start)
{
cl *ptr, *preptr;
int val;
printf("\n Enter the value after which the node has to deleted : ");
scanf("%d", &val);
ptr = start;
preptr = ptr;
while(preptr -> data != val)
{

preptr = ptr;
ptr = ptr -> next;
}
preptr -> next = ptr -> next;
if(ptr == start)
start = preptr -> next;
free(ptr);
return start;
}






