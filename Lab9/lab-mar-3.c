/* 
Suggested solution to lab March 3,2011
Implementation of vehicle struct - elements may vary
Creates a vehicle two different ways
1.  vehicleRecordT: directly
2.  *vehicleT: pointer and allocating our own memory for the record

procedures Initialise and PrintVehicle initialise and print an array of vehicles respectively

*/

#include <stdio.h>
#include "simpio.h"
#include "genlib.h"//for simplified creation of new types
//static int GetData(vehicleT *v);

//2.  It is often more useful however, to declare pointers to record types.
	typedef struct{
		string type;
		string colour;
		int nbWheels;
		int year;
		string manufacturer;
	}*vehicleT;


static void PrintData(vehicleT v);
static void Initialise(vehicleT v);

int main(){

	//1.  We can create records directly
	typedef struct{
		string type;
		string colour;
		int nbWheels;
		int year;
		string manufacturer;
	}vehicleRecordT;

	vehicleRecordT car;
	car.type = "car";
	car.colour = "silver";
	car.manufacturer = "Subaru";
	car.nbWheels = 4;
	car.year = 2005;

	//then print out the record values

	printf("Vehicle car:\na %d %s %s %s with %d wheels \n\n",car.year, car.colour,car.manufacturer, car.type, car.nbWheels);



	//we cannot use vehicleT records until we allocate some memory space for their data
	vehicleT truck = GetBlock(sizeof(vehicleT));

	//now we can allocate values for the data
	truck ->type = "pickup";
	truck->colour = "black";
	truck->manufacturer = "Dodge";
	truck->nbWheels = 4;
	truck->year = 2010;

	printf("Vehicle truck:\na %d %s %s %s with %d wheels \n\n",truck->year, truck->colour,truck->manufacturer, truck->type, truck->nbWheels);


	//3.  cslib also has a convenience function that we could make use of. It replaces the call to GetBlock.
	vehicleT v = New(vehicleT);

	//now we can initialise the record data
	v->type = "transport truck";
	v->colour = "white";
	v->manufacturer = "Mack";
	v->nbWheels = 18;
	v->year = 2008;

	printf("Vehicle v:\na %d %s %s %s with %d wheels \n\n",v->year, v->colour,v->manufacturer, v->type, v->nbWheels);
	vehicleT v1 = New(vehicleT);
	Initialise(v1);
	PrintData(v1);

	return (0);

	}

static void Initialise(vehicleT v){

	printf("Enter vehicle type\n");
	v->type = GetLine();
	printf("Enter vehicle colour\n");
	v->colour = GetLine();
	printf("Enter vehicle manufacturer\n");
	v->manufacturer = GetLine();
	printf("Enter number of wheels\n");
	v->nbWheels = GetInteger();
	printf("Enter vehicle year\n");
	v->year = GetInteger();
}


static void PrintData(vehicleT v){
	printf("Vehicle:\na %d %s %s %s with %d wheels \n\n",v->year, v->colour,v->manufacturer, v->type, v->nbWheels);
}
