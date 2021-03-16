#include <stdio.h>

#include "function.h"

int main() {
    STACK* myStack;
    myStack = create(10);
    push(myStack, 1);
    push(myStack ,2);
    push(myStack ,3);
    push(myStack ,4);
    push(myStack, 5);
    push(myStack, 6);
    push(myStack, 7);
    push(myStack, 8);
    push(myStack, 9);
    push(myStack, 10);

    while(!isEmpty(myStack))
    {
        int a = pop(myStack);
        printf("%i ", a);
    }


    return 0;
}
