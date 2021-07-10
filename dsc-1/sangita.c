#include<stdio.h>
    #include<conio.h>
    #include<math.h>
    int dat, mont, years;
    int main(){
                  
                  printf("Enter the year : ");
                  scanf("%d", &years);
                  printf("\n Enter the month : ");
                  scanf("%d", &mont);
                  printf("\n Enter the day : ");
                  scanf("%d", &dat);
                  weekday(dat, mont, years);
                  return 0;
                  }
    int weekday(int date, int month, int year) {
           int dayWeek, yr, yd;
           yr = year % 100;
           yd = year / 100;
         
           dayWeek = 1.25 * yr + findm(month, year) + date - 2 * (yd % 4);
           dayWeek = dayWeek % 7;
           switch (dayWeek){
           case 0:  printf("Saturday,");
                        break;
           case 1:  printf("Sunday,");
                        break;
           case 2:  printf("Monday,");
                        break;
           case 3:  printf("Tuesday,");
                        break;
           case 4:  printf("Wednesday,");
                        break;
           case 5:  printf("Thursday,");
                        break;
           case 6:  printf("Friday,");
                        break;
           default:  printf("The Given input data is wrong");
           }
           
           switch (month-1){
           case 0:  printf("January");
                        break;
           case 1:  printf("February");
                        break;
           case 2:  printf("March");
                        break;
           case 3:  printf("April");
                        break;
           case 4:  printf("May");
                        break;
           case 5:  printf("June");
                        break;
           case 6:  printf("July");
                        break;
            case 7:  printf("August");
                        break;
           case 8:  printf("September");
                        break;
           case 9:  printf("October");
                        break;
           case 10:  printf("November");
                        break;
           case 11:  printf("December");
                        break;
          
           default:  printf("The Given input data is wrong");
           }
           
           printf("%d,%d",dat,year);
           
           return 0;
           }
           
           
           
    int findm(int months, int yearss){
           int findmonth, leapyr;
           if ((yearss % 100 == 0) && (yearss % 400 != 0))
           leapyr = 0;
           else if (yearss % 4 == 0)
           leapyr = 1;
           else
           leapyr = 0;
           findmonth = 3 + (2 - leapyr) * ((months + 2) / (2 * months))
+ (5 * months + months / 9) / 2;
           findmonth = findmonth % 7;
           return findmonth;
    }
