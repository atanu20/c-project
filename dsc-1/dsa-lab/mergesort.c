//merge sort
#include<stdio.h>
#include<stdlib.h>
void arr1();
void arr2();
void sort();
void display();
void arrange(int *,int);

int a[100],b[100],c[100],n1,n2,i,j,k;
int n=0;
int main()
{
    printf("first array elements:");
    scanf("%d",&n1);
    printf("\nsecond array elements:");
    scanf("%d",&n2);
    printf("\nEnter the elements of 1st array:");
    for(i=0;i<n1;i++)
    {
      printf("\nEnter ");
      printf("%d",i+1);
      printf(" element of 1st array: ");
      scanf("%d",&a[i]);
    }
    printf("\nEnter the elements of 2nd array:");
    for(i=0;i<n2;i++)
    {
      printf("\nEnter ");
      printf("%d",i+1);
      printf(" element of 2nd array :");
      scanf("%d",&b[i]);
    }
    arr1();
    arr2();
    sort();
    display();
    getch();
}

void arr1()
{
    arrange(a,n1);
    printf("\nafter sorting 1st array\n");
    for(i=0;i<n1;i++)
        printf("%d ",a[i]);
}

void arr2()
{
    arrange(b,n2);
    printf("\nafter sorting 2nd array \n");
    for(i=0;i<n2;i++)
        printf("%d ",b[i]);
}

void arrange(int *m,int n)
{
    int swap=1,temp;
    for(i=0;i<n;i++)
    {
        swap=0;
        for(j=0;j<n-1-i;j++)
        {
            if(m[j]>m[j+1])
            {
                temp=m[j];
                m[j]=m[j+1];
                m[j+1]=temp;
                swap=1;
            }
        }
    }
}

void sort()
{
    i=j,k=0;
    while((i<n1)&&(j<n2))
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            if(a[i]>b[j])
            {
              c[k]=b[j];
              j++;
              k++;
            }
            else
            {
                c[k]=a[i];
                i++;
                j++;
                k++;
            }
        }
    }

    while(i<n1)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        c[k]=b[j];
        j++;
        k++;
    }
}

void display()
{
    printf("\nThe sorted elements after performing merge sort\n");
    for(i=0;i<n1+n2;i++)
        printf("%d ",c[i]);
}
