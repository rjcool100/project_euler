#include <stdio.h>
#include <stdlib.h>
int main(void) {
  //getting all highest powers of a prime before max and multiplying them
  char *primebucket;
  size_t i;
  unsigned primecount = 0;
  size_t n = 1000000;
  const unsigned target = 10001;

  primebucket = calloc(n, sizeof *primebucket);
  for (i = 2; i < n; i++) {
    if (!primebucket[i]) {
      size_t j;

      primecount++;
      if (primecount == target) {
        printf("%lu\n", i);
        break;
      }
      for (j = i*2; j < n; j += i) {
        primebucket[j] = 1;
      }
    }
  }
  free(primebucket);

  return 0;
}

