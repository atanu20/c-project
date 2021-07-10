#include<stdio.h>
#include<conio.h>
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
	
}
