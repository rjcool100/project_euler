#include <stdio.h>


int main(void){
    //storing number of letters of each number as array position
    int  ones[]={0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8};
    int  tens[]={0,3,6,6,5,5,5,7,6,6};
    int hundreds=7;
    int thousands=8;
    int sum=0;
    for(int i=1;i<1000;i++){
        int first=i%10;
        int second=((i%100)-first)/10;
        int third=((i%1000)-(second*10)-first)/100;

        if(third!=0){
            sum+=ones[third]+hundreds;
            if(second!=0||first!=0)
              sum+=3;
        }
        if(second==0||second==1){
            sum+=ones[second*10+third];
        }
        else{
            sum+=tens[second]+ones[third];
        }
    }
    sum+=thousands;
    printf("%d\n", sum);
    return 0;
}