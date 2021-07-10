#include<stdio.h>

int n,*ptr,*ptr1,i,x;

void input(void);
int min(void);
int max(void);
void show(void);

int main()
{
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    else
    {
        printf("Memory allocated successfully\n Create an array\n");
        input();
        show();
        
    }
    free(ptr);
}

void input()
{
    ptr1=ptr;
    for(i=0;i<n;i++)
    {
      
      scanf("%d",ptr1++);
    }
}

int max(void) 
{
    ptr1=ptr;
    x=*(ptr1++);

  for (i=1;i<n;i++)
  {
    if (*(ptr1)>x)
    {
       x =*(ptr1);
	   ptr1++;
    }
  }
  return x;
}

int min(void) 

{
 ptr1=ptr;
    x=*(ptr1++);

  for (i=1;i<n;i++)
  {

    if (*(ptr1)<x)
    {
       x =*(ptr1);
       ptr1++;
    }
  }
  return x;
}

void show()
{
    printf("Max is %d\n",max());
    printf("Min is %d",min());
}
