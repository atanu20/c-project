#include<stdio.h>

void sum(int []);
int main()
{
	int a[10],i,b[10];
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	sum(a);
		
	return 0;
}
void sum(int a[])
{int i,s=0,s1=0,s2=0;
	printf("array elements in reverse");
	for(i=0;i<10;i++)
	{
		if(a[i]>0)
		{
			s++;
		}
	else if(a[i]<0){
		s1++;
	}
	else{
		s2++;
	}
		
	}
	printf("\n%d %d  %d ",s,s1,s2);
}
