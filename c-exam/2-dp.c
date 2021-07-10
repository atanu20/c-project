#include <stdio.h>
#include <stdlib.h>

void create(void);
void insert(void);
void display(void);
int *ptr,n,i,*ptr1,pos,num;
void create(void)
{
    ptr1=ptr;
    for (i = 0; i < n; ++i)
           scanf("%d",(ptr1++));
}
void insert(void)
{
    ptr1=ptr;
    for (i =n-1; i>=pos-1; --i)
        {
            *(ptr1+i)=*(ptr1+i-1);
        }
        *(ptr1+pos-1)=num;
}
void display()
{
    ptr1=ptr;
    printf("The modified array is:");
        for (i = 0; i < n; ++i)
            printf("%d",*(ptr1++));
}
int main()
{
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    ptr = (int*)calloc(n, sizeof(int));
    if (ptr == NULL)
        {
        printf("Memory not allocated.\n");
        exit(0);
        }
    else
        {
        printf("Memory successfully allocated using calloc.\n");
        create();
        printf("Enter the position where you want to insert:");
        scanf("%d",&pos);
        printf("Enter the number which you want to insert: ");
        scanf("%d",&num);
        insert();
        display();
        return 0;
}
}
