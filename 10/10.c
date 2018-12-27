#include <stdio.h>
#include <math.h>

long checkprime(int end,int num){
  for(int i=2;i<=end;i++){
    if(num%i==0){
      return 0;
    }
  }
  return 1;
}

int main(void) {
  //simple maths
   int max=2000000;
   long sum=0;
   for(int i=2;i<max;i++){
    if(checkprime(sqrt(i),i)){
      sum+=i;
    }
  }

  printf("sum :%ld\n", sum);
  return 0;
}
