/*
	File: Lab6.c
	C basics: pointers
	demonstrates pass by reference and pass by value
	Program finds the mean and standard	deviation of
	5 hard-coded values
	Winter 2011
	*/

	#include <stdio.h>
	#include <math.h>

	/* procedure prototype*/
	static void CalcStats(double *m, double *s, double a, double b, double c, double d, double e);

	int main(){

		printf("This program calculates the mean and standard deviation of five numbers\n");
		printf("The numbers are hard-coded: 23, 4,15,77,32\n");
		double mean, stddev;

		CalcStats(&mean, &stddev,23.0,4.0, 15.0, 77.0,32.0);

		printf("Mean is: %.2f and standard deviation is: %.2f", mean, stddev);
		return(0);
	}

	static void CalcStats(double *m, double *s, double a, double b, double c, double d, double e){

		*m = (a+b+c+d+e)/5;
		*s = sqrt((pow(*m-a,2) + pow(*m-b,2) + pow(*m-c,2) + pow(*m-d,2) + pow(*m-e,2))/5);
		return;
	}

