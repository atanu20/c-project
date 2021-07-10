/*#include<stdio.h>
int main()
{
	char a[10]="xyz";
	int i;
	for(i=0;i<3;i++)
	{
		printf("\n%c%c%c",a[i],a[i+1],a[i+2]);
	}
	
	
	
	
//	printf("\n%c%c%c",a[0],a[2],a[1]);
//	printf("\n%c%c%c",a[1],a[0],a[2]);
//	printf("\n%c%c%c",a[1],a[2],a[1]);
//	printf("\n%c%c%c",a[2],a[1],a[0]);
//	printf("\n%c%c%c",a[2],a[0],a[1]);
//	
	
}*/



#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int count(int m);
int sum1(int n);
int sum2(int p);
int main()
{
    int N,no=0;
    scanf("%d", &N);
    while(1)
    {
    if(count(no)==N)
    {
        if(sum1(no)==sum2(no))
        {
            printf("%d  ", no);
        }
        no++;
    }
    else if(count(no)<N)
    {
        no++;
    }
    else if(count(no)>N)
    {
        exit(0);
    }
    }
    return 0;
}
int count(int m)
{
    int d=0,c=0;
    while(m>0)
    {
        d=m%10;
        c++;
        m=m/10;
    }
    return c;
}
int sum1(int n)
{
    int s1=0,t=n,d=0,i=1;
    while(t>0)
    {
        if(i%2==0)
        {
            d=t%10;
            s1=s1+d;
            i++;
            t=t/10;
        }
        else
        {
            i++;
            t=t/10;
        }
    }
    return s1;
}
int sum2(int p)
{
    int s2=0,t=p,d=0,i=1;
    while(t>0)
    {
        if(i%2==1)
        {
            d=t%10;
            s2=s2+d;
            i++;
            t=t/10;
        }
        else
        {
            i++;
            t=t/10;
        }
    }
    return s2;
}
