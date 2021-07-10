#include<stdio.h>
int main()
{
	int a[10];
	int i;
	printf("enter number between 0 to 9: ");
	for(i=1;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int s=0;
	for(i=1;i<10;i++)
	{
		s=s+a[i];
	}
	
	printf("missing number is %d",45-s);
}
