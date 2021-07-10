#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>

int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     
     int max=-32768;
     
void game();
void help();
void view();    
void last();
void heigst();    
	
	 
 struct quz{
 	
 	char na[20];
 	int pno;
 	int sc;
 	
 };    
 
 
 FILE *fp;
     
void main()
{
     	
     	
     	mainhome:
     system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");

     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   BECOME A GOOD QUIZER!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the progress score card  ");
     printf("\n\t\t > Press T for top score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if(choice=='H')
     {
     	help();
     	
	 }
	 else if(choice=='Q')
	 {
	 	last();
	 	getch();
	 	exit(1);
	 }
	 else if(choice=='V')
	 {
	 	view();
	 }
	 else if(choice=='T')
	 {
	 	heigst();  
	 }
     	
     else if(choice=='S')
	 {
	 	system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter your name:");
    fflush(stdin);
     gets(playername);


    system("cls");
    printf("\n ------------------  Welcome ** %s ** to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
	 	
	 if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }	
       
       
       home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
     	
     	system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		printf("\n\nWhich of the following is a Palindrome number?");
		printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
          }
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.23232");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nThe country with the highest environmental performance index is...");
		printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Switzerland");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nWhich animal laughs like human being?");
		printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Hyena");
		       getch();
		       break;}
     	
     	
	       }
	 
	 }
	 
	 if(count>=2)
	{
		system("cls");
     printf("\n\n\t*** CONGRATULATION ** %s ** you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch()))
		{
			
			system("cls");
			game();
		}
	
	
	}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     	
     	
 }
 else{
 	printf("\n\n\t\tinvalid input \n");
 	getch();
 		goto mainhome;
 }
     	
	 }
	 
	 
	 
	 
void game()
{
	struct quz s;
	fp=fopen("quiz.txt","ab");
	
	if(fp==NULL)
	{
		printf("error!");
		exit(1);
	}
	 	
	 	
countr=0;	
     for(i=1;i<=10;i++)
     {
	 	system("cls");
     	r=i;

     switch(r)
		{
				case 1:
		printf("\n\n1.What is the National Game of England?");
		printf("\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Cricket");getch();
		       //goto score;
		       break;}

		case 2:
		printf("\n\n\n2.Study of Earthquake is called............,");
		printf("\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Seismology");getch();
		      //goto score;
		       break;
		       }

        case 3:
		printf("\n\n\n3.Among the top 10 highest peaks in the world, how many lie in Nepal? ");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.8");getch();
		       //goto score;
		       break;}

        case 4:
		printf("\n\n\n4.The Laws of Electromagnetic Induction were given by?");
		printf("\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Faraday");getch();
		       //goto score;
		       break;
		       }

        case 5:
		printf("\n\n\n5.In what unit is electric power measured?");
		printf("\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Power");
		       getch();
		      // goto score;
		       break;
		       }

		case 6:
		printf("\n\n\n6.Which element is found in Vitamin B12?");
		printf("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Cobalt");
			   //goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\n7.What is the National Name of Japan?");
		printf("\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Nippon");getch();
		       //goto score;
		       break;}

        case 8:
		printf("\n\n\n8.How many times a piece of paper can be folded at the most?");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.7");getch();
		       //goto score;
		       break;}

        case 9:
		printf("\n\n\n9.What is the capital of Denmark?");
		printf("\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Copenhagen");getch();
		       //goto score;
		       break;}

        case 10:
		printf("\n\n\n10.Which is the longest River in the world?");
		printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Nile");getch();break;
			   //goto score;
			   }

     	}
     	
     	
     }


printf("\n\n\t\t Your score is %d\n",countr);


	printf("\n\n\t\t\t\t~*~*~*~*~QUIZ DETAIL~*~*~*~*~\n\n");
	printf("\t\t\tenter your name: ");
	fflush(stdin);
	gets(s.na);
	printf("\t\t\tenter  phone number: ");
	fflush(stdin);
	scanf("%d",&s.pno);
	sco:
	printf("\t\t\tenter  quiz score which u get it this exam: ");
	fflush(stdin);
	scanf("%d",&s.sc);
	
	if(s.sc==countr)
	{
		fwrite(&s,sizeof(s),1,fp);
        printf("data stored successfully");
     fclose(fp); 
	}
else{
	printf("\tplese,enter correct score !!\n");
	getch();
	
	goto sco;
	
}


getch();
main();

	 	
 }
 
 
 void view()
 {
 	int mo,f=0;
 	system("cls");
 	struct quz s;
 	
 	printf("\n\n\n\t\t~*~-~*~<=><=>Your score card ~*~-~*~<=><=>\n");
 	printf("\t\t-------------------<***>-----------------\n");
 	printf("\n\t\tEnter your ph no to show your progress score card : ");
 	fflush(stdin);
 	scanf("%d",&mo);
 	fp=fopen("quiz.txt","rb");
	
	if(fp==NULL)
	{
		printf("error!");
		exit(1);
	}
 	
 	

 	
 	printf("\n%-30s %-30s %s \n","Name"," Ph no","Score");
 	printf("---------------------------------------------------------------------\n");
 	
 	while(fread(&s,sizeof(s),1,fp)==1)
	 {
 		if(mo==s.pno)
 		{
 			f=1;
 			printf("%-30s %-30d %d \n",s.na,s.pno,s.sc);
 			
		 }
 		
 		
 		
 	}
 	
 		
	 
	 
	 if(f==1)
	 {
	 	printf("\n\n\t\tYour result is found\n");
	 	printf("\n\t\t practice more and more");
	 	getch();
	 	main();
	 }
	 else{
	 	printf("\t\tYour result is not found\n");
	 	printf("\t\tIf u not yet given exam ,please give exam");
	 	getch();
	 	main();
	 }
 	
 	fclose(fp);
 	getch();
 	
 	
 	
 }
 
 
 
 
 
 
 

void help()
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions .");
    //printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
        printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by ATANU********");
	
	getch();
	system("cls");
	main();

	}





void last()
{
	system("cls");
	if (count>=2)
	{
		printf("\n\n\n\t\t\tYour score is %d\n ",countr);
	printf("\t\t\t****************************\n");
	printf("\n\t\t\tTHANK YOU");
	}
	else{
		printf("\n\n\t\tYour result is not found\n");
	 	printf("\t\tIf u not yet given exam ,please give exam");
	 	getch();
	 	
	 	
	 	
	}
	
	
	
	
	
}



void heigst()
{
	int mo,f=0;
 	system("cls");
 	struct quz s;
 	
 	printf("\n\n\n\t\t~*~-~*~<=><=>Your score card ~*~-~*~<=><=>\n");
 	printf("\t\t-------------------<***>-----------------\n");
 	printf("\n\t\tEnter your ph no to show your progress score card : ");
 	fflush(stdin);
 	scanf("%d",&mo);
 	fp=fopen("quiz.txt","rb");
	
	if(fp==NULL)
	{
		printf("error!");
		exit(1);
	}
 	
 	

 	
 	//printf("\n%-30s %-30s %s \n","Name"," Ph no","Score");
 	//printf("---------------------------------------------------------------------\n");
 	
 	/*while(fread(&s,sizeof(s),1,fp)==1)
	 {
 		if(mo==s.pno)
 		{
 			f=1;
 			printf("%-30s %-30d %d \n",s.na,s.pno,s.sc);
 			
		 }
 		
 		
 		
 	}*/
 	for(i=1;(fread(&s,sizeof(s),1,fp)==1);i++)
 	{
 		if(mo==s.pno)
 		{
 			f=1;
 			if(s.sc>max)
 			max=s.sc;
 			
 			
		 }
 		
 		
	 }
 		
	 printf("\nYour highest score is %d\n",max);
	 max=-32768;
	 
	 if(f==1)
	 {
	 	printf("\n\n\t\tYour result is found\n");
	 	printf("\n\t\t practice more and more");
	 	getch();
	 	main();
	 }
	 else{
	 	printf("\t\tYour result is not found\n");
	 	printf("\t\tIf u not yet given exam ,please give exam");
	 	getch();
	 	main();
	 }
 	
 	fclose(fp);
 	getch();
 	
 	
	
	
}
























