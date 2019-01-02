#include <stdio.h>

int largestPrime(long int number){
    int largest=2;
    while(number>largest){
        if(number%largest==0){
            number=number/2;
            largest=2;
        }else
        {
            largest++;
        }
    }
    return largest;
}

int main(void) {
    //this takes a lot of time, i need to brush up my maths i guess 
	long int num=600851475143;
	printf("%d",largestPrime(num));
	return 0;
}
