/*
    File: structexample.c
    demonstrates dynamic allocation of records
    written by Hazel Webb
    February 22, 2011
    */

#include <stdio.h>//for printf
#include "simpio.h"//for GetLine etc
#include "genlib.h"//for New


//define a new data type employeePtr
typedef struct {
    string name;
    string title;
    string SIN;
    double salary;
} *employeePtr;


//define a new data type employeeT
typedef struct {
    string name;
    string title;
    string SIN;
    double salary;
} employeeT;


int main(){

    //declare a new variable of type employeeT
    employeeT emp;


    //assign values to all fields in our new variable
    emp.name= "John Smith";
    emp.title = "boss";
    emp.SIN = "12345678";
    emp.salary = 1500;

    //verify that all is okay
    printf("our first employee:  %s %s %s $%.2f\n\n", emp.name, emp.title, emp.SIN,emp.salary);


    //more usual way to use structs is to allocate memory dynamically and define our new data type as a pointer
    // this allows us to pass our employee records to procedures to be updated

    employeePtr e1, e2;
    //declare a variable of our new data type
    e1 = New(employeePtr);

    e2 = malloc(sizeof(employeePtr));

    if (e2 == NULL)
        Error("Not enough memory");

    //accessing fields is now done through the dereferencing operator
    e1->name = "Fred Flintstone";
    e1->title = "Stone crusher";
    e1->SIN = "223333";
    e1->salary = 150.75;
    printf("our second employee:  %s %s %s $%.2f\n\n", e1->name, e1->title, e1->SIN,e1->salary);


    return(0);
}
