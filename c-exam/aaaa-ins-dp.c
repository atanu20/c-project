#include<stdio.h>



void input(void);
void increase(void);
void show(void);
int n,*ptr,*ptr1,i;
int main()
{
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    ptr = (int*) malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    else
    {
        printf("Memory allocated successfully\n Enter elements of an array\n");
        input();
         increase();
        show();
        
        return 0;
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

void increase(void) 
{
    ptr1=ptr;
    for(i=0;i<n;i++)
     {
        (*ptr1)+=1;
        ptr1++;
     }

}

void show(void)
{
    ptr1=ptr;
    printf("After incrementing values ");
    for(i=0;i<n;i++)
    {
        printf("\n%d",*(ptr1++));
    }
}
