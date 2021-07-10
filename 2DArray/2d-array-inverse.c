#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	float d=0;
	printf("enter number");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}

printf("array is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d  ",a[i][j]);
			
		}
		printf("\n");
		
	}
	
	for(i=0;i<3;i++)
	{
		d=d+(a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+2)%3]*a[2][(i+1)%3]));
	}
	printf("\ndeterminant is %f \n",d);
	
	printf("inverse is\n");
	for(i=0;i<3;i++){
 for(j=0;j<3;j++)
 {
 	printf("%.2f\t",((a[(j+1)%3][(i+1)%3] * a[(j+2)%3][(i+2)%3]) - (a[(j+1)%3][(i+2)%3]*a[(j+2)%3][(i+1)%3]))/ d);
 }
 printf("\n");
 }
	
	
	
	return 0;
}
