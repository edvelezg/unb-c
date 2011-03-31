/**
	File: lab-mar-31.c
	Implements a heap data structure using an array
	Size of heap is fixed to 32 nodes
	Parent of node n is (n-1)/2
	Left child node is 2n +1
	Right child node is 2n + 2, where n is the position of this node
	Root node is at position 0

	written by Hazel Webb
	March 30, 2011
**/

#include <stdio.h>
#include "simpio.h"


//constant
#define SIZE 32


// function prototypes
static int InsertNode(int array[], int insertValue, int where);
static void Display(int array[], int where);

int main(){

	int heap[SIZE];//static allocation of array of size 10
	int where = 0;

	//initialise heap to negative values:
	for(int i = 0; i < SIZE; ++i)
		heap[i] = 1000000;

	for(int i = 0; i < 10; ++i){
		printf("Enter a number\n");
		where = InsertNode(heap,GetInteger(), where);
	}

	Display(heap, where);


}


/**
	Function: InsertNode
          inserts insertValue at position where in array if heap order
		  is not violated otherwise the insertValue is percolated up until it
		  no longer violates heap order.
**/
static int InsertNode(int array[], int insertValue, int where){
	int inserted = 0;
	int location = (where -1)/2;
	int temp = where;


		array[where] = insertValue;

		if(array[location] <= insertValue)
			return where + 1;//we're done

		//otherwise need to find the correct spot
		while(inserted == 0 ){

			printf("location: %d",location);
			array[temp] = array[location];//swap the values
			array[location] = array[temp];
			temp = location;
			location = (location - 1)/2;

			if(array[location] <= insertValue ){
		//this is an okay spot
			  array[temp] = insertValue;
			  inserted = 1;

		}
		if(location == 0 && insertValue < array[location]){
			array[temp] = array[location];
			array[location] = insertValue;
			inserted = 1;
		}
}


	return where +1;
}


/**
	Function: Display
	Displays the heap in order from root to rightmost leaf.
	Breadth-first display.
**/
static void Display(int array[], int where){

	for(int i = 0 ; i < where; ++i)
		printf("node %d: (%d) -> ", i, array[i]);

	printf("\n");
}



