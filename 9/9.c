#include <stdio.h>
#include <stdlib.h>

long numproduct(char digits[],int start,int end){
  long maxproduct=1;
  for(int i=start;i<=end;i++){
    maxproduct=maxproduct*(digits[i]-'0');
  }
  return maxproduct;
}

int main(void) {
  //simple maths
   int a, b,c;

  for (a = 1; a <= 333; a++) {
    for (b = a+1; b <= 666; b++) {
      int c = (1000 - a - b);
      if (a*a + b*b == c*c) {
        printf("%d\n", a * b * c);
        a=333;
        b=666;
      }
    }
  }
  return 0;
}
