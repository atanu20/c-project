#include<stdio.h>
int main()
{
	int a[3][3],i,j,*p,max=-32768,min=32767;
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
			if(*(p+i*3+j)>max){
				max=*(p+i*3+j);
			}
			
			if(*(p+i*3+j)<min){
				min=*(p+i*3+j);
			}
			
		}
		
	}
	
	
	
	printf("\n maximum is %d,minimum is %d",max,min);
	return 0;
}
