#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#include <dos.h>
int i,j,k,w=20,h=20,gameover=0,f=0;
int x,y,fx,fy,score=0;
int tailx[100],taily[100],counttail=0;
int main()
{
	char ca;
	label5:
	setup();
	while(!gameover)
	{
	
	draw();
	input();
	 logic();
	  //sleep(1);
	  int c, d;
   
   for (c = 1; c <= 5000; c++)
       for (d = 1; d <= 25000; d++)
       {}
       
     
  }
	
 
    printf("\nPress Y to continue again ,else N  : ");
    fflush(stdin);
  scanf("%c",&ca);  
  if(ca=='y' || ca=='Y')
  {
  	
  	goto label5;
  	
   } 
   

	return 0;
}
void logic()
{
	
	int prex=tailx[0];
	int prey=taily[0];
	int pre2x,pre2y;
	tailx[0]=x;
	taily[0]=y;
	for(i=1;i<counttail;i++)
	{
		pre2x=tailx[i];
		pre2y=taily[i];
		tailx[i]=prex;
		taily[i]=prey;
		prex=pre2x;
		prey=pre2y;
		
		
	}
	
	
	switch(f)
	{
		case 1:
			y--;
			break;
		case 2:
			y++;
			break;
		case 3:
			x--;
			break;
		case 4:
			x++;
			break;
		default:
			break;
	}
	if(x<0 || x>w || y<0 || y>h)
	{
		printf("\a");
		gameover=1;
		
	}
	
	for(i=0;i<counttail;i++)
	{
		if(x==tailx[i] && y==taily[i])
		{printf("\a");
			gameover=1;
		}
	}
	
	if(x==fx && y==fy)
	{
		label3:
	fx=rand()%20;
	if(fx==0)
	{
		goto label3;
	}
	label4:
	fy=rand()%20;
	if(fy==0)
	{
		goto label4;
	}
	score+=10;
counttail++;
	}
}

void input()
{
	if(kbhit())
	{
		switch(getch())
		{
			case 'a':
				f=1;
				break;
			case 's':
				f=2;
				break;
			case 'w':
			     f=3;
				break;
			case 'z':
				f=4;
				break;
			case 'x':
				exit(0);
			case 'c':
				gameover=1;
				break;
		}
	}
	
}

void setup()
{
	gameover=0;
	x=w/2;
	y=h/2;
	label1:
	fx=rand()%20;
	if(fx==0)
	{
		goto label1;
	}
	label2:
	fy=rand()%20;
	if(fy==0)
	{
		goto label2;
	}
	score=0;
	
}


void draw()
{
	system("cls");
	for(i=0;i<w;i++)
	{
		for(j=0;j<h;j++)
		{
			if(i==0 || i==w-1 || j==0 || j==h-1)
			{
				printf("*");
			}
			else{
				if(i==x && j==y)
				printf("O");
				else if (i==fx && j==fy)
				{
					printf("F");
				}
				else{
					int ch=0;
					for(k=0;k<counttail;k++)
					{
						if(i==tailx[k] && j==taily[k])
						{
							printf("o");
							ch=1;
						}
						
					}
					if(ch==0)
					{
						printf(" ");	
					}
				
				
				}
			}
		}
		printf("\n");
	}
	printf("\nSCORE=%d",score);
	
}

