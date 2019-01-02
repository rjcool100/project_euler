#include <stdio.h>
int main(void) {
    //used the sum of n terms to determine sum of terms from 3,5,15 till the last multiple before 9999 
    //and then add the sum of three and five and subtract the sum of 15
	int n=999;
	int three=0,five=0,both=0;
	three=n/3;
	five=n/5;
	both=n/15;
	int sum=0;
	sum=three*(2*3+(three-1)*3)/2+five*(2*5+(five-1)*5)/2-both*(2*15+(both-1)*15)/2;
	printf("%d",sum);
	return 0;
}
