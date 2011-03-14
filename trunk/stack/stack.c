/* stack.c
implements the stack interface described in the text
*/

#include <stdio.h>
#include "genlib.h"
#include "stack.h"

/**
	Constant: MAX_STACK_SIZE
	defines the amount of space to allocate for the arry
	that holds the stack elements.  Attempts to push more
	than this many values will result in an error
**/

#define MAX_STACK_SIZE 5

/**
	Type: stackCDT
	The type stackCDT is the concrete representation of the type
	stackADT defined by the interface.  Elements are stored in an
	array.
**/

struct stackCDT{
	stackElementT elements[MAX_STACK_SIZE];
	int count;
};


stackADT NewStack(void){

	stackADT stack;
	stack = New(stackADT);
	stack -> count = 0;
	return (stack);
}



void FreeStack(stackADT stack){
	FreeBlock(stack);
}


void Push(stackADT stack, stackElementT element){
	if(StackIsFull(stack))
		Error("stack size exceeded");

	stack->elements[stack->count++] = element;
}

stackElementT Pop(stackADT stack){

	if(StackIsEmpty(stack))
		Error("Pop of an empty stack");
	return (stack->elements[--stack->count]);
}

bool StackIsFull(stackADT stack){
	return (stack->count == MAX_STACK_SIZE);

}

bool StackIsEmpty(stackADT stack){
	return (stack->count == 0);
}

int StackDepth(stackADT stack){
	return (stack->count);
}

stackElementT GetStackElement(stackADT stack, int index){
	if(index < 0 || index >= stack-> count)
		Error("Non-existent stack element");

	return (stack->elements[stack->count - index - 1]);
}
