#include <stdio.h>

void mul2(int *array,int no){
    int carry=0,digit;
    while(*array>=0){
        digit=carry+(*array*no);
        carry=digit/10;
        *array++=digit%10;
      
    }
    if(carry) {
        if(carry>=100){
            int cdigit=carry%100;
            cdigit=cdigit%10;
            *array++=cdigit;
            carry=carry-cdigit;
            
            carry=carry/10;
            
        }
        if(carry>=10){
            int  cdigit=carry%10;
            *array++=cdigit;
             carry=carry-cdigit;
            carry=carry/10;
        }
        *array++=carry;
    }
    
    *array=-1;
    
    //printf("%d",*array);
}

int sum(int *array){
    int sum=0;
    while(*array>=0)
    {
        sum += *array++;
        }
    return sum;
}
int main(void){
    //storing digits of multiplication result to get the desired factorial in an array  
    int arr[158] = {1, -1};
    int i;
    for(i=1;i<=100;i++)
        mul2(arr,i);
    printf("\n %d\n", sum(arr));
    return 0;
}