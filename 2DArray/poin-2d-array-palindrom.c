#include<stdio.h>
int main()
{
	int a[3][3],i,j,*p,r,s=0,n;
	printf("enter array elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	p=&a[0][0];
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			n=*(p+i*3+j);
			s=0;
			while(n>0)
			{
				r=n%10;
				s=s*10+r;
				n=n/10;
				
			}
			
			if(*(p+i*3+j)==s)
			{
				printf("\n%d is palindrom",*(p+i*3+j));
			}
			
		}
		
	}
	
	
	
	
	return 0;
}
