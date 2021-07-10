#include<stdio.h>
int f1(float );
int f2(float );
int main()
{
	float a;
	printf("enter number");
	scanf("%f",&a);
	int x;
	if(a<0)
	{
		x=f1(a);
	}
	else{
		x=f2(a);
	}
	printf("%d",x);
	return 0;
	
}
int f1(float a)
{
	int x;
	if((a-0.5)>(int)(a-1)){
				
				x=(int)a;
	        }
	        else{
	        	x=(int)a-1;
			}
			return x;
}

int f2(float a)
{
	int x;
	if((a+0.5)>=(int)(a+1)){
				x=(int)a+1;
	        }
	        else{
	        	x=(int)a;
			}
			return x;
}
