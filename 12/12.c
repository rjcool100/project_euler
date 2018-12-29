#include <stdio.h>
#include <math.h>

int main(void) {
  //calculating factors  upto square  root of a the triangle number and proceeding
 int dcount=2,n=7,limit;
 unsigned int triangle = 28; 
 while (dcount <=500)
 {
  dcount = 2;
  n++;
  triangle+=n;
  limit=sqrt(triangle); 
  for (int i=2;i<=limit;i++)
  {
   if (!(triangle%i))
   {
    if (i==limit)
     dcount++;
    else
     dcount+= 2;
   }
  }
 }
 printf("The number  is  %d\n", triangle);
  return 0;
}