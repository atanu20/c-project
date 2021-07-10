#include<stdio.h>
#include<conio.h>

void regis();
void login();
void helo();


struct regis{
	
	char n[50];
	char e[50];
	char c[12];
	char p[50];

	
};

FILE *fp;


int main()
{int ch;
	while(1)
	{
		system("cls");
			printf("\n\n\t\t\t~*~*~*~*~*~*~STUDENT MANAGEMENT SYSTEM~*~*~*~*~*~*~\n");
			printf("\n\n\t\t\t1.For Register\n");
			printf("\t\t\t2.For Login\n");
			printf("\t\t\t3.For Exit\n");
			printf("\t\t\tchoose your choice: ");
			scanf("%d",&ch);
			switch(ch)
				{
					case 1:
						regis();
						break;
					case 2:
						login();
						break;
						
					case 3:
						exit(0);
						
					default :
						printf("invalid input");
				}
				getch();
	}
	
}


void regis()
{
	struct regis s;
	fp=fopen("reg.txt","ab");
	if(fp==NULL)
	{
		printf("error!");
		exit(1);
		
	}
	printf("\n\t\t\tenter name: ");
	fflush(stdin);
	gets(s.n);
	printf("\t\t\tenter email: ");
	fflush(stdin);
	gets(s.e);
	
	printf("\t\t\tenter contact number: ");
	fflush(stdin);
	gets(s.c);
	printf("\n\t\t\tenter password: ");
	fflush(stdin);
	gets(s.p);
	
	fwrite(&s,sizeof(s),1,fp);
printf("\n\t\tdata stored successfully");
fclose(fp);
getch();
	return 0;
	
}

void login()
{
	int f=0;
	char e[50],p[50];
	char c[12];
	struct regis s;
	
	fp=fopen("reg.txt","rb");
	if(fp==NULL)
	{
		printf("error!");
		exit(1);
		
	}
		printf("\t\tenter email: ");
	fflush(stdin);
	gets(e);
	
	
	printf("\t\tenter password: ");
	fflush(stdin);
	gets(p);
	
	
	
	while(fread(&s,sizeof(s),1,fp)==1){




	if((strcmp(e,s.e)==0) && (strcmp(p,s.p)==0))
	{
		f=1;
		break;
	}


		
		
	}
fclose(fp);
if(f==1)
{
	printf("\tlogin successful");
	getch();
	helo();
}
else{
	printf("plese enter valid email and password");
}

getch();
	return 0;
	
	
}

void helo()
{system("cls");
	printf("\n\n\n\t\t\t\tWel Come Dear");
}
