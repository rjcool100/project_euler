#include <stdio.h>

int main(void) {
    //not much explanation needed i guess, change the code if required 
	int n1=0,n2=1,sum=0,fib=0;
    while(fib<4000000){
        fib=n1+n2;
        if(fib%2==0)
         sum=sum+fib;
        n1=n2;
        n2=fib;
    }
	
	printf("%d",sum);
	return 0;
}
