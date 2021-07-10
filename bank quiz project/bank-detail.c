#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//void manu();
void dep();
void deposite();
void deposhow();
void with();
void withdraw();
void withshow();
void last();
void transfer();
void tran();
void transhow();

int a;
char na[20];
int totaldep=0,totalwith=0,totaltra=0,total=1000;
int count=1;

struct bank{
	char n[20];
	char os[20];
	int ac;
	int amount;
	
	struct date{
		int d,m,y;
		
	}dob,dom,doy;
	
	
};

struct with{
	char n[20];
	char os[20];
	int ac;
	int amount;
	struct date1{
		int d,m,y;
		
	}dob,dom,doy;
	
};

struct tra{
	char n[20];
	char os[20];
	int ac;
	int amount;
	
	struct date2{
		int d,m,y;
		
	}dob,dom,doy;
	
	
};


FILE *f1;
FILE *fp;
FILE *fq;

void main()
{
	int ch;
	system("cls");
	if (count==1)
	{
		printf("\n\n\t\t\t\t~*~*~*~*~BANK ACCOUNT~*~*~*~*~\n\n");
	printf("\n\n\t\tenter your name: ");
	fflush(stdin);
	gets(na);
	printf("\n\t\tenter account number: ");
	fflush(stdin);
	scanf("%d",&a);
	count++;
	}
	
	
	
	while(1)
	{
		//getch();
		
		system("cls");
		printf("\n\n\t\t\t\t~*~*~*~*~BANK ACCOUNT~*~*~*~*~\n\n");
		printf("\t\t\t1.For Deposite\n");
		printf("\t\t\t2.For Withdraw\n");
		printf("\t\t\t3.For Transfer\n");
		//printf("\t\t\t4.For checkdetail\n");
		printf("\t\t\t0.For exit\n");
		printf("\n\t\t\tenter choice : ");
		fflush(stdin);
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				 dep();
				
				break;
			case 2:
				with();
			
				break;
			case 3:
				transfer();
				
				break;
			
			case 0:
				last();
				getch();
				exit(0);
			default:
				printf("invalid input");
			
		}
		getch();
		
	}
	
	
	//return 0;
	
}


	


void dep()
{
	int ch;
struct bank s;

while(1){
system("cls");
printf("<== Bank Management ==>\n");
printf("<== Deposite ==>\n");
printf("1.Want to deposite\n");
printf("2.Show deposite list\n");
printf("0.Back To Main Menu\n");
printf("\n\nEnter your choice: ");
scanf("%d",&ch);

switch(ch){
case 0:
main();
break;

case 1:
deposite();


break;

case 2:
 deposhow();
break;

default:
printf("Invalid Choice");

}
getch();
}
}



void deposite()
{
	//totalamount=1000;
		struct bank s;
	fp=fopen("deposite.txt","ab");
	
	if(fp==NULL)
	{
		printf("error!");
		exit(1);
	}
	
		printf("\n\n\t\t\t\t~*~*~*~*~BANK ACCOUNT~*~*~*~*~\n\n");
	printf("\t\t\tenter your name: ");
	fflush(stdin);
	gets(s.n);
	printf("\t\t\twant to deposite or withdraw: ");
	fflush(stdin);
	gets(s.os);
	printf("\t\t\tenter  account number: ");
	fflush(stdin);
	scanf("%d",&s.ac);
	printf("\t\t\tenter  amount which you want to deposite: ");
	fflush(stdin);
	scanf("%d",&s.amount);
	
	printf("date of deposite: ");
	scanf("%d %d %d",&s.dob.d,&s.dom.m,&s.doy.y);
	
	
	


fwrite(&s,sizeof(s),1,fp);
printf("data stored successfully");
fclose(fp);
getch();
	//return 0;
	
	
	
	
	
}


void deposhow()
{
	int ac,f=0;
	struct bank s;
	//struct with s1;
	
	
printf("Enter account no to search: ");
scanf("%d",&ac);
//printf("%-30s %-30s %-20s %s\n","Name"," Account no","Amount","Date");
printf("%-30s %-30s %-30s %-30s %s\n","Name","Operation"," Account no","Amount","Date");
fp=fopen("deposite.txt","rb");
//fq=fopen("deposite.txt","rb");
while(fread(&s,sizeof(s),1,fp)==1){
	
		if(ac == s.ac){
		f=1;
		printf("%-30s %-30s %-30d %-30d %d-%d-%d\n",s.n,s.os,s.ac,s.amount,s.dob.d,s.dom.m,s.doy.y);
		//break;
		}
		}
		fclose(fp);
		if(f==0)
		printf("Record Not Found...");
		else
		{
		//fread(&s1,sizeof(s1),1,fp);
		printf("Record Found Successfully...");
		totaldep+=s.amount;
	}
		printf("\n\n\t\tyour total deposite amount %d",totaldep);
		
		
			
}


void with()
{
		int ch;
struct with s1;

while(1){
system("cls");
printf("<== Bank Management ==>\n");
printf("<== WITHDRAW ==>\n");
printf("1.Want to Withdraw\n");
printf("2.Show withdraw  list\n");
printf("0.Back To Main Menu\n");
printf("\n\nEnter your choice: ");
scanf("%d",&ch);

switch(ch){
case 0:
main();
break;

case 1:
withdraw();


break;

case 2:
 withshow();
break;

default:
printf("Invalid Choice");

}
getch();
}
	
}

void withdraw()
{
	
		struct with s1;
		withhead:
	fq=fopen("deposite.txt","ab");
	
	if(fq==NULL)
	{
		printf("error!");
		exit(1);
	}
	
		printf("\n\n\t\t\t\t~*~*~*~*~BANK ACCOUNT~*~*~*~*~\n\n");
	printf("\t\t\tenter your name: ");
	fflush(stdin);
	gets(s1.n);
	printf("\t\t\twant to deposite or withdraw: ");
	fflush(stdin);
	gets(s1.os);
	printf("\t\t\tenter  account number: ");
	fflush(stdin);
	scanf("%d",&s1.ac);
	printf("\t\t\tenter  amount which you want to withdraw: ");
	fflush(stdin);
	scanf("%d",&s1.amount);
	if (s1.amount<=total)
	
	{
		printf("date of withdraw: ");
	scanf("%d %d %d",&s1.dob.d,&s1.dom.m,&s1.doy.y);

fwrite(&s1,sizeof(s1),1,fq);
printf("data stored successfully");
fclose(fq);
		
		
	}
	else{
		printf("Withdraw amount is greater than total amount");
		getch();
		goto withhead;
		
	}
	
getch();
	//return 0;
	
	
	
	
}


void withshow()
{
	int ac,f=0;
	struct with s1;
printf("Enter account no to search: ");
scanf("%d",&ac);
//printf("%-30s %-30s %-20s %s\n","Name"," Account no","Amount","Date");
printf("%-30s %-30s %-30s %-30s %s\n","Name","Operation"," Account no","Amount","Date");
fq=fopen("deposite.txt","rb");
while(fread(&s1,sizeof(s1),1,fq)==1){
	
		if(ac == s1.ac){
		f=1;
		printf("%-30s %-30s %-30d %-30d %d-%d-%d\n",s1.n,s1.os,s1.ac,s1.amount,s1.dob.d,s1.dom.m,s1.doy.y);
		//break;
		}
		}
		fclose(fq);
		if(f==0)
		printf("Record Not Found...");
		else
		{
		
		printf("Record Found Successfully...");
		//if(s1.amount<=totalamount)
		  totalwith+=s1.amount;
	}
		printf("\n\n\t\t your  total withdraw amount %d",totalwith);
		
		//printf("\nSEE DETAIL OF DEPOSITE\n");
		
			
	
}



void transfer()
{
		int ch;
struct tra s2;

while(1){
system("cls");
printf("<== Bank Management ==>\n");
printf("<== TRANSFER ==>\n");
printf("1.Want to Transfer\n");
printf("2.Show Transfer  list\n");
printf("0.Back To Main Menu\n");
printf("\n\nEnter your choice: ");
scanf("%d",&ch);

switch(ch){
case 0:
main();
break;

case 1:
tran();


break;

case 2:
 
transhow();
break;

default:
printf("Invalid Choice");

}
getch();
}
	
}

void tran()
{
	struct tra s2;
	tranhead:
	f1=fopen("deposite.txt","ab");
	
	if(f1==NULL)
	{
		printf("error!");
		exit(1);
	}
	
		printf("\n\n\t\t\t\t~*~*~*~*~BANK ACCOUNT~*~*~*~*~\n\n");
	printf("\t\t\tenter your name: ");
	fflush(stdin);
	gets(s2.n);
	printf("\t\t\twant to deposite or withdraw or transfer: ");
	fflush(stdin);
	gets(s2.os);
	printf("\t\t\tenter  account number: ");
	fflush(stdin);
	scanf("%d",&s2.ac);
	printf("\t\t\tenter  amount which you want to transfer: ");
	fflush(stdin);
	scanf("%d",&s2.amount);
	if (s2.amount<=total)
	
	{
		printf("date of withdraw: ");
	scanf("%d %d %d",&s2.dob.d,&s2.dom.m,&s2.doy.y);
fwrite(&s2,sizeof(s2),1,f1);
printf("data stored successfully");
fclose(f1);
	}
	else{
		printf("transfer amount is greater than total amount");
		getch();
		goto tranhead;
	}
getch();
	//return 0;
	
	
	
	
	
}

void transhow()
{
	int ac,f=0;
	struct tra s2;
printf("Enter account no to search: ");
scanf("%d",&ac);
//printf("%-30s %-30s %-20s %s\n","Name"," Account no","Amount","Date");
printf("%-30s %-30s %-30s %-30s %s\n","Name","Operation"," Account no","Amount","Date");
f1=fopen("deposite.txt","rb");
while(fread(&s2,sizeof(s2),1,f1)==1){
	
		if(ac == s2.ac){
		f=1;
		printf("%-30s %-30s %-30d %-30d %d-%d-%d\n",s2.n,s2.os,s2.ac,s2.amount,s2.dob.d,s2.dom.m,s2.doy.y);
		//break;
		}
		}
		fclose(f1);
		if(f==0)
		printf("Record Not Found...");
		else
		{
		
		printf("Record Found Successfully...");
		//if(s1.amount<=totalamount)
		  totaltra+=s2.amount;
	}
		printf("\n\n\t\t your  total transfer amount %d",totaltra);
		
		//printf("\nSEE DETAIL OF DEPOSITE\n");
	
	
	
}
void last()
{
	system("cls");
	printf("\n\n\t\t\t\t~*~*~*~*~BANK ACCOUNT~*~*~*~*~\n\n");
	printf("\n\n\t\t\tYour name is %s\n",na);
	printf("\n\n\t\t\tYour account no %d\n",a);
	total+=(totaldep-totalwith-totaltra);
	printf("\n\n\t\t\tYour Total amount is %d ",total);
	getch();
	
}




