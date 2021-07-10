#include<stdio.h>
int main()
{
	int a[3][3],i,j,*p,s=0,s1=0;
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
			if(*(p+i*3+j)%2==0){
				s=s+*(p+i*3+j);
			}
			else{
				s1=s1+*(p+i*3+j);
			}
			
		}
		
	}
	
	
	
	printf("\n even sum %d,odd sum %d",s,s1);
	return 0;
}
