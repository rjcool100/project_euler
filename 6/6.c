#include <stdio.h>
#include <stdlib.h>
int main(void) {
    //geting the nth prime
    int n=100;
    int sum=0,squaresum=0;
    sum=n*(n+1)/2;
    sum*=sum;
    squaresum=n*(n+1)*(2*n+1)/6;
    printf("difference: %d\n",abs(squaresum-sum));  
  return 0;
}

