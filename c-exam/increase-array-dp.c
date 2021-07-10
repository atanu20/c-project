#include<stdio.h>
#include<stdlib.h>

void increase(void);
int n,*ptr,i;
int main()
{
	
	printf("enter a number : ");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Memory is not allocated\n");
		exit(0);
		
	}
	else{
		printf("Enter elements....\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",ptr+i);
		}
		
		increase();
		
		
	}
	free(ptr);
	return 0;
}

void increase(void)
{
	printf("after increase elements are....\n");
		for(i=0;i<n;i++)
		{
			printf("%d\n",++*(ptr+i));
		
		
		}
}
