//
// Created by Huni on 3/16/2021.
//

#ifndef VEREM_FUNCTION_H
#define VEREM_FUNCTION_H

#include <stdbool.h>

typedef struct {
    int maxsize;
    int sp;
    int* items;
}STACK;

STACK* create(int capacity);
bool isEmpty(STACK* myStack);
bool isFull(STACK* myStack);
void push(STACK* myStack, int a);
int pop(STACK* myStack);
int top(STACK* myStack);

#endif //VEREM_FUNCTION_H
