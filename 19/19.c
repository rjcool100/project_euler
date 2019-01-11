#include <stdio.h>

static const int *montharr(int year) {
   static const int nonleap[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   static const int leap[]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return (year%4==0&&(year%100!=0||year%400==0))?leap:nonleap;
}

int main(void) {
     //getting number  of days per month for leeap and nonleap year month wise and adding 
    int sunday=0,startday=2;
    for (int year=1901;year<=2000;++year) {
        const int *monthlength=montharr(year);
        for (int month=0;month<12; month++) {
            if (startday==0) {
                sunday++;
            }
            startday=(startday+monthlength[month])%7;
        }
    }
    printf("%d\n", sunday);
}