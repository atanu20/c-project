#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int dup[20],i,j,cnt,n;
	
	printf("Enter Name: ");
	gets(str);
	
	 n= strlen(str);
	 
	 	for(i=0;i<n;i++)
	{
		dup[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		cnt=1;
		for(j=i+1;j<n;j++)
		{
			if(str[i]==str[j])
			{
				cnt++;
				dup[j]=0;
			}
		}
		if(dup[i]!=0)
		dup[i]=cnt;
	}
	printf("The unique characters are: ");
	for(i=0;i<n;i++)
	{
		if(dup[i]==1)
		printf("%c",str[i]);		
	}	
	
	printf("\nThe duplicate characters are: ");
	for(i=0;i<n;i++)
	{
		if(dup[i]>1)
		printf("%c ",str[i]);		
	}	
	return 0;
}
