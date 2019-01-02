#include <stdio.h>

int main(void) {
  //caching already computed lengths and reusing them
   int number = 1000000;
 
    int sequenceLength = 0;
    int startingNumber = 0;
    long sequence;
    
    int cache[number+1];
    int i;
    for (i=0; i <=number; i++) {
        cache[i] = -1;
    }
    cache[1]=1;
    for (i=2;i<=number;i++) {
        sequence=i;
        int k=0;
        while (sequence>=i) {
            k++;
            if ((sequence%2)==0) {
                sequence/=2;
            } else {
                sequence=sequence*3+1;
            }
        }
        cache[i]=k+cache[sequence];
        if (cache[i]>sequenceLength) {
            sequenceLength=cache[i];
            startingNumber=i;
        }
    }

    printf("%d\n", startingNumber);
  return 0;
}