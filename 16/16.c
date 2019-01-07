#include <stdio.h>

void mul2(int *array){
    int carry=0,digit;
    while(*array>=0){
        digit=carry+(*array*2);
        carry=digit/10;
        *array++=digit%10;
    }
    if(carry) 
    *array++=carry;
    *array=-1;
}

int sum(int *array){
    int sum=0;
    while(*array>=0)
        sum += *array++;
    return sum;
}

int main(void){
    //storing digits of multiplication result to geet the desired power in an array  
    int arr[1000] = {1, -1};
    int i;
    for(i=0;i<1000;i++)
        mul2(arr);
    printf("%d\n", sum(arr));
    return 0;
}