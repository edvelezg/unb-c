#include <stdio.h>
#include "simpio.h"

#define INCH  0.0254;
#define FOOT  12;


int main()
{
	string name;
	double meters;
	int feet;
	int inches;

	printf("enter your name\n");
	name = GetLine();

	printf("Thankyou, %s.  Please enter your measurement in meters and I will convert it to feet and inches",name);
	meters = GetReal();

	inches = meters / INCH;


	feet = inches / FOOT;


	inches = inches % FOOT;

	printf("Your measurement of %f meters is %d feet and %d inches ", meters, feet, inches);

	return 0;
}
