/**
	stack.h interface for the stack abstraction
	values in the stack are constrained to a single type
	although the type can be changed by altering the
	definition of stackElementT in this interface
	**/

#ifndef _stack_h
#define _stack_h


#include "genlib.h"


/*
	Type: stackElementT
	default type is double, but this can be changed by
	editing this definition line
	**/
typedef double stackElementT;


/**
	Type: stackADT
	represents the abstract data type used to store the elements
	that have been pushed.  It is defined as a pointer and clients
	have no access to the underlying fields
	**/
typedef struct stackCDT *stackADT;


/**
	Function: NewStack
	Usage:  stack = NewStack();
	This function allocates and returns a new stack, which is
	initially empty
**/
stackADT NewStack(void);


/**
	Function: FreeStack
	usage: FreeStack(stack);
	This function frees the storage associated with the stack
**/
void FreeStack(stackADT stack);


/**
	Function: Push
	usage: Push(stack, element);
	This function pushes the specified element onto the stack
	If the stack is full when Push is called, the function
	calls Error with an appropriate message.
**/
void Push(stackADT stack, stackElementT element);


/**
	Function: Pop
	usage: element = Pop(stack);
	This function pops the top element from the stack and returns
	that value.  The first popped value is always the last one that
	was pushed.  If the stack is empty when Pop is called, the function
	calls Error with an appropriate message
**/
stackElementT Pop(stackADT stack);


/**
	Functions: StackIsEmpty,StackIsFull
	usage: if(StackIsEmpty(stack))...
	       if(StackIsFull(stack))...
 	These functions test whether the stack is empty or full
**/
bool StackIsEmpty(stackADT stack);
bool StackIsFull(stackADT stack);

/**
	Function: StackDepth
	usage: depth = StackDepth(stack)
	This function returns the number of elements currently pushed
	on the stack
**/
int StackDepth(stackADT stack);


/**
	Function GetStackElement
	usage: element = GetStackElement(stackADT stack, int index);
	This function returns the element at the specified index where the top
	of the stack is defined as index 0.  For example, calling GetStackElement(stack, 0)
	returns the top element on the stack without removing it.  If the caller tries to
	access an out-of-range element, GetStackElement calls Error with an appropriate
	message.  This is not a fundamental stack operation, it is provided only to assist
	with debugging.
**/
stackElementT GetStackElement(stackADT stack, int index);

#endif
