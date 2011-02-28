/** lab13.c solution to labs 13-14 CS1023
	Winter 2010
	Compute the sum of the first n integers.
	Compares an iterative and recursive implementation
	**/

#include <stdio.h>
#include "simpio.h"
#include "strlib.h"


//function prototy[pe
int IterativeSum( int n);
int RecursiveSum(int n);



int main(){

	int sum;

	printf("This program will print sum the first n values.  It will continue until you enter -1\n");
	printf("Enter a number\n");
	int n = GetInteger();
	while(n != -1){

		sum = IterativeSum(n);
		printf("Iteratively: The sum of numbers 1-%d is %d\n",n,sum);

		sum = RecursiveSum(n);
		printf("Recursively: The sum of numbers 1-%d is %d\n",n,sum);

		printf("Enter a number\n");
		n = GetInteger();

	}
	return 0;
}


int IterativeSum(int n){
	int i, sum =0;
	for( i = 1; i <= n; ++i)
		sum += i;
	return (sum);
}

int RecursiveSum(int n){
	int m;
	printf("Inside RecursiveSum(%d)\n",n);
	if(n==1)
		return n;
	m = n + RecursiveSum(n-1);
	printf("m: %d\n",m);
	return m;
}
