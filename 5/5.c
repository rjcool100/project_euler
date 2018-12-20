#include <stdio.h>

int checkPrime(int number) {
    int i, flag = 0;
 for(i = 2; i <= number/2; ++i)
    {
        // condition for nonprime number
        if(number%i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return 1;
    else
        return 0;
}


int main(void) {
    //getting all highest powers of a prime before max and multiplying them
    int max=20;
    int fact=1;
    for(int i=2;i<=max;i++){
        int mul=1;
        if(checkPrime(i))
        {
            while(mul<=max){
                mul=mul*i;
            }
            mul/=i;
            fact=fact*mul;
        }
    }
  printf("multiple is: %d\n", fact);  

  return 0;
}

