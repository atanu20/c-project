#include<stdio.h>
int main()
{
	int a[5],i,s=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<5;i++)
	{
		s=s+a[i];
	}
	//printf("%d\n",s);
	int q,w,e,r,t;
					
				q=a[0]+a[1]+a[2]+a[3];
				w=a[0]+a[1]+a[2]+a[4];
				e=a[0]+a[1]+a[4]+a[3];
				r=a[0]+a[4]+a[2]+a[3];
				t=a[4]+a[1]+a[2]+a[3];
			
			
				
				
				if(q>w && q>e && q> r && q>t)
					printf("%d\n",q);
				if(w>q && w>e && w> r && w>t)
					printf("%d\n",w);
				if(e>w && e>q && e> r && e>t)
					printf("%d\n",e);
				if(r>q && r>e && r>w && r>t)
					printf("%d\n",r);
				if(t>q && t>e && t>w && t>r)
					printf("%d\n",t);
					
					if(q<w && q<e && q< r && q<t)
					printf("%d\n",q);
				if(w<q && w<e && w< r && w<t)
					printf("%d\n",w);
				if(e<w && e<q && e< r && e<t)
					printf("%d\n",e);
				if(r<q && r<e && r<w && r<t)
					printf("%d\n",r);
				if(t<q && t<e && t<w && t<r)
					printf("%d\n",t);
					
				
	
	
}
