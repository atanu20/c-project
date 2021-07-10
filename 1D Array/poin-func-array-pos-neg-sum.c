#include<stdio.h>
void sumoddeven(int *);
int main()
{
	int a[10],i,m;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	 sumoddeven(a);
	
	return 0;
}
void sumoddeven(int *p)
{
	int i,s=0,s1=0;
	
	for(i=0;i<10;i++)
	{
		if(*p>0)
		{
			s=s+*p;
		}
		else if(*p<0){
			s1=s1+*p;
		}
	p++;
		
	}
	printf("positive sum %d ,negative sum %d",s,s1);
	
	
	
}
