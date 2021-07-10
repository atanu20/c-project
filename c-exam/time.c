//#include <stdio.h>
//#include <time.h>
//#include <stdint.h>
#include<windows.h>
 
/*int main()
{
	struct tm *local,*gm;
	time_t t;
	t=time(NULL);
	local=localtime(&t);
	printf("time --> %d : %d: %d  %d %d %d ",local -> tm_hour,local -> tm_min,local -> tm_sec,local -> tm_mday,	1+local -> tm_mon,1900+local -> tm_year);
}*/
void main()
{
	SYSTEMTIME stime;
	GetSystemTime(&stime);
	printf("%d: %d: %d  %d",stime.wDay,stime.wMonth,stime.wYear,stime.wDayOfWeek);
	printf("The system time is: %02d:%02d\n", stime.wHour, stime.wMinute);
}

/*#include <windows.h>
#include <stdio.h>

void main()
{
    SYSTEMTIME st, lt;
    
    GetSystemTime(&st);
    GetLocalTime(&lt);
    
    printf("The system time is: %02d:%02d\n", st.wHour, st.wMinute);
    printf(" The local time is: %02d:%02d\n", lt.wHour, lt.wMinute);
}*/


