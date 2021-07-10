#include<stdio.h>

int main()
{
	int a[10],i,*p,max=-32768,min=32767;
	printf("enter elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	for(i=0;i<10;i++)
		{
			if(*p>max)
			max=*p;
			if(*p<min)
			min=*p;
			
		p++;
		}
	printf("max is %d,min is %d",max,min);
	return 0;
}

