#include<stdio.h>
int main()
{
	int a[20],i,j,n;
    printf("range: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    
   for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
    if(a[i] > a[j])
    {
       int k=a[i];
        a[i]=a[j];
        a[j]=k;
    }
   }
}
    
    
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if ( a[i]%2==0 && a[j]%2==0)
			{
				printf("(%d  %d )",a[i],a[j]);
				
			break;
			}
			else if ( a[i]%2!=0 && a[j]%2!=0)
			{
				printf("(%d  %d )",a[i],a[j]);
			
				break;
			}
		}
	}
	
	
}
