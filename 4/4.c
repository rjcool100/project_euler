#include <stdio.h>

int checkPalindrome(unsigned long number) {
  unsigned long reversed = 0, n = number;
  while (n > 0) {
    reversed = reversed * 10 + n % 10;
    n /= 10;
  }
  return number == reversed;
}


int main(void) {
    //simple iterative approach, i couldnt think of a better solution right now i guess
  unsigned int n1, n2;
  unsigned int max = 0;
  for (n1 = 100; n1 <= 999; n1++) {
    for (n2 = 100; n2 <= 999; n2++) {
      unsigned int p = n1*n2;
      if(checkPalindrome(p) && p > max) {
        max = p;
      }
    }
  }

  printf("Largest palindrome is: %d\n", max);  

  return 0;
}

