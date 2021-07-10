#include<stdio.h>



void input(void);
void insert(void);
void show(void);
int *ptr,*ptr1,n,count=0,i,pos,num;
int main()
{
    printf("Enter the size of array: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    else
    {
       printf("Memory allocated successfully\n Create an array");
       input();
       insert();
       show();
       
    }
    free(ptr);
}

void input(void)
{
	
	ptr1=ptr;
    for(i=0;i<n;i++)
    {
      
      scanf("%d",ptr1++);
    }
	
    
}

void insert() // inserting a value in an array at a given position
{
    ptr1=ptr;
    for(i=0;i<count;i++)
        ptr1++;
        upp:
    printf("Enter the position no to insert element:");
    scanf("%d",&pos);

    if(pos<=n)
    {
      printf("Enter the value:");
      scanf("%d",&num);
     for(i=count;i>=pos;i--)
      {
       *(ptr1)=*(ptr1-1);
         ptr1--;
      }
     *(ptr1)=num;
     count++;
    }
    else
    {
        printf("\nEnter position no <= size of array\n");
       
        goto upp;
    }

}

void show()
{
    
    
    ptr1=ptr;
    
    for(i=0;i<count;++i)
    {
        printf("\n%d",*(ptr1++));
    }
    
}
