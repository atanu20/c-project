#include<stdio.h>
int main(){
	
	int t;
	printf("How many number u want to enter: ");
	scanf("%d",&t);
int a[t],n,i=0;
int fre[100000]={0};
int min=32767,val=0;
for(i=0;i<t;i++)
{
	scanf("%d",&a[i]);
	fre[a[i]]++;
	
}

for(i=0;i<100000;i++)
	{
		if(min>a[i] && a[i]!=0)
		{
			min=a[i];
			val=i;
		}
	}
printf("value is %d",min);

}


