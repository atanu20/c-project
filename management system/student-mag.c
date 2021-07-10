#include<stdio.h>
#include<conio.h>
#include<stdlib.h>



struct student{
	
	int ro;
	char a[50];
	char b[50];
	struct date{
		int d,m,y;
		
	}dob,dom,doy;
	
};
void input();
void display();
void search();
void modify();
void searchByRoll();
void searchByName();
void del();
void sort();
void sortByRoll();
void sortByName();

//long si = sizeof(s);


FILE *fp;

void main()
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
printf("6.Sort\n");
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
					case 6:
						sort();
						break;
					
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
	//return 0;
	
	
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
	//return 0;
	
	
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
main();
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

void sort(){
int ch;
struct student s;
while(1){
system("cls");
printf("<== School Management ==>\n");
printf("<== Sort ==>\n");
printf("1.Sort By Roll\n");
printf("2.Sort By Name\n");
printf("0.Back To Main Menu\n");
printf("\n\nEnter your choice: ");
scanf("%d",&ch);

switch(ch){
case 0:
main();
break;

case 1:
sortByRoll();
break;

case 2:
sortByName();
break;

default:
printf("Invalid Choice");

}
getch();
}

}

void sortByRoll(){


system("cls");
int c=0, i, j;
struct student s;
struct student s1[50],t;
printf("<== School Management ==>\n");
printf("<== Sort By Roll ==>\n");
fp = fopen("input.txt","rb");
while(fread(&s,sizeof(s),1,fp)==1)
s1[c++]=s;

for(i=0; i<c-1; i++){
for(j=i+1; j<c; j++){
if(s1[i].ro >s1[j].ro){
t = s1[i];
s1[i]=s1[j];
s1[j]=t;

}

}
}

printf("%-10s %-30s %-20s %s\n","Roll"," Name","Class","Date");

for(i=0; i<c; i++)
printf("%-10s %-30s %-20d %s\n",s1[i].ro,s1[i].a,s1[i].b,s1[i].dob.d,s1[i].dom.m,s1[i].doy.y);
}

void sortByName(){
clrscr();
int c=0, i, j;
struct student s;
struct student s1[50],t;
printf("<== School Management ==>\n");
printf("<== Sort By Name ==>\n");
fp = fopen("input.txt","rb");
while(fread(&s,sizeof(s),1,fp)==1)
s1[c++]=s;

for(i=0; i<c-1; i++){
for(j=i+1; j<c; j++){
if(strcmpi(s1[i].a, s1[j].a)>1){
t = s1[i];
s1[i]=s1[j];
s1[j]=t;

}

}
}

//printf("%-30s %-20s %-10s %s\n","Name","Class","Roll","Date");
//
//for(i=0; i<c; i++)
//printf("%-30s %-20s %-10d %s\n",s1[i].na,s1[i].cl,s1[i].rl,s1[i].date);

printf("%-10s %-30s %-20s %s\n","Roll"," Name","Class","Date");

for(i=0; i<c; i++)
printf("%-10s %-30s %-20d %s\n",s1[i].ro,s1[i].a,s1[i].b,s1[i].dob.d,s1[i].dom.m,s1[i].doy.y);
}
