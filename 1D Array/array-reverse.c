#include<stdio.h>
int main()
{
	int a[10],i,t;
	printf("enter ten numbers");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
//	printf("reverse array are ");
//	for(i=0;i<10;i++)
//	{
//		printf("\n%d",a[9-i]);
//	}
//	return 0;

printf("reverse array");
//for(i=0;i<10/2;i++)
//{
//	t=a[i];
//	a[i]=a[9-i];
//	a[9-i]=t;
//	
//}
//for(i=0;i<10;i++)
//	{
//		printf("\n%d",a[i]);
//	}
//	return 0;

for(i=9;i>=0;i--)
	{
		printf("\n%d",a[i]);
	}
	return 0;	


	
}
