//
// Created by Huni on 3/16/2021.
//

#include "function.h"
#include <stdio.h>
#include <stdlib.h>

STACK* create(int capacity)
{
    STACK* myStack = (STACK*)malloc(sizeof(STACK));

    if(!myStack)
    {
        printf("Error!");
        return 0;
    }

    myStack->maxsize = capacity;
    myStack->items = (STACK*)malloc(myStack->maxsize * sizeof(STACK));

    myStack->sp = -1;

}


bool isEmpty(STACK* myStack)
{
    if(myStack->sp == -1)
    {
        return true;
    }else
    {
        return false;
    }
}

bool isFull(STACK* myStack)
{
    if(myStack->sp == myStack->maxsize)
    {
        return true;
    }else
    {
        return false;
    }
}

void push(STACK* myStack, int a)
{
    if(!isFull(myStack))
    {
        myStack->sp++;
        myStack->items[myStack->sp] = a;
    }else
    {
        printf("The stack is full!");
    }
}

int pop(STACK* myStack)
{
    int a;

    if(!isEmpty(myStack))
    {
        a = myStack->items[myStack->sp];
        myStack->sp--;
        return a;
    }else
    {
        printf("THe stack is empty!");
    }
}

int top(STACK* myStack)
{
    return myStack->items[myStack->sp];
}