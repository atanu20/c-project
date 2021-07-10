#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void regis();
void login();
void manu();
void input();
void display();
void search();
void modify();
void searchByRoll();
void searchByName();
void del();



struct regis{
	
	char n[50];
	char e[50];
	char c[12];
	char p[50];

	
};

struct student{
	
	int ro;
	char a[50];
	char b[50];
	struct date{
		int d,m,y;
		
	}dob,dom,doy;
	
};


FILE *fp;
FILE *fq;


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
	struct regis s1;
	fq=fopen("reg.txt","ab");
	if(fq==NULL)
	{
		printf("error!");
		exit(1);
		
	}
	printf("\n\t\t\tenter name: ");
	fflush(stdin);
	gets(s1.n);
	printf("\t\t\tenter email: ");
	fflush(stdin);
	gets(s1.e);
	
	printf("\t\t\tenter contact number: ");
	fflush(stdin);
	gets(s1.c);
	printf("\n\t\t\tenter password: ");
	fflush(stdin);
	gets(s1.p);
	
	fwrite(&s1,sizeof(s1),1,fq);
printf("\n\t\tdata stored successfully");
fclose(fq);
getch();
system("cls");
printf("\n\n\t\t\t\t~*~*~*~LOGIN HERE~*~*~*~\n\n");
login();
	return 0;
	
}

void login()
{
	int f=0;
	char e[50],p[50];
	
	struct regis s1;
	
	fq=fopen("reg.txt","rb");
	if(fq==NULL)
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
	
	
	
	while(fread(&s1,sizeof(s1),1,fq)==1){




	if((strcmp(e,s1.e)==0) && (strcmp(p,s1.p)==0))
	{
		f=1;
		break;
	}


		
		
	}
fclose(fq);
if(f==1)
{
	printf("\tlogin successful");
	getch();
	manu();
}
else{
	printf("plese enter valid email and password");
}

getch();
	return 0;
	
	
}
void manu()
{
	int ch;
while(1){
system("cls");
printf("<== School Managment ==>\n");
printf("1.Take Admission\n");
printf("2.Student Info\n");
printf("3.Search\n");
printf("4.Modify\n");
printf("5.Delete\n");
//printf("6.Sort\n");
printf("0.Exit\n\n");
printf("Enter Your choice: ");
scanf("%d",&ch);
				switch(ch){
					case 1:
						input();
						break;
					case 2:
						display();
						break;
					case 3:
						search();
						break;
					case 4:
						modify();
						break;
					case 5:
						del();
						break;
//					case 6:
//						sort();
//						break;
//					
					case 0:
					exit(0);
				
				
				default:
				printf("Invalid Choice");
				}
    getch();
   }
}
void input()
{
	struct student s;
fp=fopen("input.txt","ab");
if(fp==NULL)
{
	printf("error!");
	exit(1);
}
printf("enter roll no: ");
scanf("%d",&s.ro);
printf("enter name : ");
fflush(stdin);
gets(s.a);
printf("enter depert : ");
fflush(stdin);
gets(s.b);
	printf("date of addmition: ");
	scanf("%d %d %d",&s.dob.d,&s.dom.m,&s.doy.y);
	


fwrite(&s,sizeof(s),1,fp);
printf("data stored successfully");
fclose(fp);
getch();
	return 0;
	
	
}

void display()
{
	struct student s;
fp=fopen("input.txt","rb");
if(fp==NULL)
{
	printf("error!");
	exit(1);
}
system("cls");
printf("%-10s %-30s %-20s %s\n","Roll"," Name","Class","Date");

		//printf("\n%s\t\t\t%s\t\t\t%s\t\t\t%s\n","Roll no","Name","dept","date");
		printf("-------------------------------------------------------------------------------------------------------------\n");
	
	while(fread(&s,sizeof(s),1,fp)==1){

printf("%-10d %-30s %-20s %d-%d-%d\n",s.ro,s.a,s.b,s.dob.d,s.dom.m,s.doy.y);
	
//	printf("%d\t\t",s.ro);
//printf("%s\t\t\t",s.a);
//printf("%s",s.b);
//
//
//	
//printf("\t\t\t");
//	printf("%d-%d-%d\n",s.dob.d,s.dom.m,s.doy.y);

}

fclose(fp);
	return 0;
	
	
}

void search()
{
	int ch;
struct student s;
while(1){
system("cls");
printf("<== School Management ==>\n");
printf("<== Search ==>\n");
printf("1.Search By Roll\n");
printf("2.Search By Name\n");
printf("0.Back To Main Menu\n");
printf("\n\nEnter your choice: ");
scanf("%d",&ch);

switch(ch){
case 0:
manu();
break;

case 1:
searchByRoll();
break;

case 2:
searchByName();
break;

default:
printf("Invalid Choice");

}
getch();
}
}

void searchByRoll()
{
	int ro,f=0;
	struct student s;
printf("Enter Roll to search: ");
scanf("%d",&ro);
printf("%-10s %-30s %-20s %s\n","Roll"," Name","Class","Date");
fp=fopen("input.txt","rb");
while(fread(&s,sizeof(s),1,fp)==1){
		if(ro == s.ro){
		f=1;
		printf("%-10d %-30s %-20s %d-%d-%d\n",s.ro,s.a,s.b,s.dob.d,s.dom.m,s.doy.y);
		break;
		}
		}
		fclose(fp);
		if(f==0)
		printf("Record Not Found...");
		else
		printf("Record Found Successfully...");
		
			
}

void searchByName()
{
	char a[50];
int f=0;
struct student s;
printf("Enter Name to search: ");
fflush(stdin);
gets(a);
printf("%-10s %-30s %-20s %s\n","Roll"," Name","Class","Date");
fp=fopen("input.txt","rb");
while(fread(&s,sizeof(s),1,fp)==1){
if(strcmp(a,s.a)==0){
f=1;
printf("%-10d %-30s %-20s %d-%d-%d\n",s.ro,s.a,s.b,s.dob.d,s.dom.m,s.doy.y);
break;
}
}
fclose(fp);
if(f==0)
printf("Record Not Found...");
else
printf("Record Found Successfully...");

	
	
}





void modify()
{
	int ro, f=0;
	struct student s;
printf("Enter Roll To Modifiy: ");
scanf("%d",&ro);
fp=fopen("input.txt","rb+");
while(fread(&s,sizeof(s),1,fp)==1){
if(ro == s.ro){
f=1;
printf("enter roll no: ");
scanf("%d",&s.ro);
printf("enter name : ");
fflush(stdin);
gets(s.a);
printf("enter depert : ");
fflush(stdin);
gets(s.b);
	printf("date of addmition: ");
	scanf("%d %d %d",&s.dob.d,&s.dom.m,&s.doy.y);
	fseek(fp,-sizeof(s),1);


fwrite(&s,sizeof(s),1,fp);

//printf("Enter New Name: ");
//fflush(stdin);
//gets(s.na);
//printf("Enter Class: ");
//scanf("%s",s.cl);
//printf("Enter New Roll: ");
//scanf("%d",&s.rl);
//fseek(fp,-sizeof(s),1);
//fwrite(&s,sizeof(s),1,fp);
fclose(fp);
break;
}
}
if(f==0)
printf("Record Not Found...");
else
printf("Modified Successfully...");

	
}

void del()
{
	int ro, f=0;
		struct student s;
printf("Enter roll to delete: ");
scanf("%d",&ro);

FILE *ft;
fp = fopen("input.txt","rb");
ft = fopen("temp.txt","ab");

while(fread(&s,sizeof(s),1,fp)==1){
if(ro == s.ro){
f=1;
}else{
fwrite(&s,sizeof(s),1,ft);
}

}
fclose(fp);
fclose(ft);
remove("input.txt");
rename("temp.txt","input.txt");

if(f==0)
printf("Record Not Found...");
else
printf("Record Deleted Successfully...");

	
}

