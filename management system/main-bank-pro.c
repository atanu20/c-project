#include<stdio.h>
#include<conio.h>

int ch,acc;
char n[20];
int totalamount=1000,amount=0,with=0,totaldeposite=0,tr=0,totaltr=0,totalwith=0;


void regis();
void login();
void manu();
void deposite();
void withdraw();
void transfer();
void checkdetail();
void last();

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
	fp=fopen("bank.txt","ab");
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
system("cls");
printf("\n\n\t\t\t~*~*~*~*LOGIN NOW*~*~*~*~*\n\n");
login();
	return 0;
	
}

void login()
{
	int f=0;
	char e[50],p[50];
	char c[12];
	struct regis s;
	
	fp=fopen("bank.txt","rb");
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
	system("cls");
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
	
	printf("\n\n\t\t\t\t~*~*~*~*~BANK ACCOUNT~*~*~*~*~\n\n");
	printf("\t\t\tenter your name: ");
	fflush(stdin);
	gets(n);
	printf("\t\t\tenter  account number: ");
	fflush(stdin);
	scanf("%d",&acc);
	
	while(1)
	{
		getch();
		system("cls");
		printf("\n\n\t\t\t\t~*~*~*~*~BANK ACCOUNT~*~*~*~*~\n\n");
		printf("\t\t\t1.For Deposite\n");
		printf("\t\t\t2.For Withdraw\n");
		printf("\t\t\t3.For Transfer\n");
		printf("\t\t\t4.For checkdetail\n");
		printf("\t\t\t0.For exit\n");
		printf("\n\t\t\tenter choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				deposite();
				totaldeposite+=amount;
				break;
			case 2:
				withdraw();
				if(with<=totalamount)
				totalwith+=with;
				break;
			case 3:
				transfer();
				if(tr<=totalamount)
				totaltr+=tr;
				break;
			case 4:
				checkdetail();
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
	
	
	return 0;
	
	
}

void deposite(){
	printf("\t\t\tEnter amount which you want to deposite: ");
	scanf("%d",&amount);
	totalamount+=amount;
	
	
	
}
void withdraw(){
	
	printf("\t\t\tEnter amount which you want to withdraw:  ");
	scanf("%d",&with);
	if(with<=totalamount)
	totalamount-=with;
	else{
		printf("Withdraw amount is greater than total amount");
	}
	
}

void transfer()
{
	printf("\t\t\tEnter amount which you want to transfer: ");
	scanf("%d",&tr);
	
	if(tr<=totalamount)
	totalamount-=tr;
	else{
		printf("\t\t\tTransfer amount is greater than total amount");
	}
	
	
	
	
}
void checkdetail()
{
	
	printf("\t\t\tTotal amount is %d\n",totalamount);
		printf("\t\t\tTotal deposite is %d\n",totaldeposite);
	printf("\t\t\tTotal withdraw is %d\n",totalwith);
	printf("\t\t\tTotal transfer is %d\n",totaltr);
	
}

void last()
{
	
	system("cls");
	printf("\n\n\n\t\t\t*~*~*~*Your Account detail*~*~*~*\n \n");
	printf("\t\t\tYour Name is %s\n",n);
	printf("\t\t\tYour Account number is %d\n",acc);
	printf("\t\t\tTotal amount is %d\n",totalamount);
		printf("\t\t\tTotal deposite is %d\n",totaldeposite);
	printf("\t\t\tTotal withdraw is %d\n",totalwith);
	printf("\t\t\tTotal transfer is %d\n\n",totaltr);
	printf("\t\t\t~*~*~*~*~*~THANK YOU ~*~*~*~*~*~");
	
}




/*
int ch,acc;
char n[20];
int totalamount=1000,amount=0,with=0,totaldeposite=0,tr=0,totaltr=0,totalwith=0;
void deposite();
void withdraw();
void transfer();
void checkdetail();
void last();

void main()
{
	printf("\n\n\t\t\t\t~*~*~*~*~BANK ACCOUNT~*~*~*~*~\n\n");
	printf("\t\t\tenter your name: ");
	fflush(stdin);
	gets(n);
	printf("\t\t\tenter  account number: ");
	fflush(stdin);
	scanf("%d",&acc);
	
	while(1)
	{
		getch();
		system("cls");
		printf("\n\n\t\t\t\t~*~*~*~*~BANK ACCOUNT~*~*~*~*~\n\n");
		printf("\t\t\t1.For Deposite\n");
		printf("\t\t\t2.For Withdraw\n");
		printf("\t\t\t3.For Transfer\n");
		printf("\t\t\t4.For checkdetail\n");
		printf("\t\t\t0.For exit\n");
		printf("\n\t\t\tenter choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				deposite();
				totaldeposite+=amount;
				break;
			case 2:
				withdraw();
				if(with<=totalamount)
				totalwith+=with;
				break;
			case 3:
				transfer();
				if(tr<=totalamount)
				totaltr+=tr;
				break;
			case 4:
				checkdetail();
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
	
	
	return 0;
	
	
}

void deposite(){
	printf("\t\t\tEnter amount which you want to deposite: ");
	scanf("%d",&amount);
	totalamount+=amount;
	
	
	
}
void withdraw(){
	
	printf("\t\t\tEnter amount which you want to withdraw:  ");
	scanf("%d",&with);
	if(with<=totalamount)
	totalamount-=with;
	else{
		printf("Withdraw amount is greater than total amount");
	}
	
}

void transfer()
{
	printf("\t\t\tEnter amount which you want to transfer: ");
	scanf("%d",&tr);
	
	if(tr<=totalamount)
	totalamount-=tr;
	else{
		printf("\t\t\tTransfer amount is greater than total amount");
	}
	
	
	
	
}
void checkdetail()
{
	
	printf("\t\t\tTotal amount is %d\n",totalamount);
		printf("\t\t\tTotal deposite is %d\n",totaldeposite);
	printf("\t\t\tTotal withdraw is %d\n",totalwith);
	printf("\t\t\tTotal transfer is %d\n",totaltr);
	
}

void last()
{
	
	system("cls");
	printf("\n\n\n\t\t\t*~*~*~*Your Account detail*~*~*~*\n \n");
	printf("\t\t\tYour Name is %s\n",n);
	printf("\t\t\tYour Account number is %d\n",acc);
	printf("\t\t\tTotal amount is %d\n",totalamount);
		printf("\t\t\tTotal deposite is %d\n",totaldeposite);
	printf("\t\t\tTotal withdraw is %d\n",totalwith);
	printf("\t\t\tTotal transfer is %d\n\n",totaltr);
	printf("\t\t\t~*~*~*~*~*~THANK YOU ~*~*~*~*~*~");
	
}*/
