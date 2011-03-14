#include <stdio.h>
#include <ctype.h>
#include "genlib.h"
#include "simpio.h"
#include "strlib.h"
#include "stack.h"

/* Main */

int main()
{
    stackADT operandStack;
    operandStack = NewStack();

    Push(operandStack, 3);
    Push(operandStack, 4);
    Push(operandStack, 6);

    int depth = StackDepth(operandStack);

    printf("depth: %d\n", depth);

    printf("%f\n", GetStackElement(operandStack, 0));
    printf("%f\n", GetStackElement(operandStack, 1));
    printf("%f\n", GetStackElement(operandStack, 2));

    int elem = ((int)Pop(operandStack));
    printf("%d\n", elem);

    depth = StackDepth(operandStack);
    printf("depth: %d\n", depth);

    return 0;
}


