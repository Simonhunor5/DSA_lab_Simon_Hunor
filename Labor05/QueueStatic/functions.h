//
// Created by Huni on 3/23/2021.
//

#ifndef QUEUESTATIC_FUNCTIONS_H
#define QUEUESTATIC_FUNCTIONS_H

#include <stdbool.h>

typedef struct
{
    int maxsize; // a verem maximális kapacitása
    int front, rear;
    int *items;
} QUEUE;

QUEUE* create(int capacity);
bool isEmpty(QUEUE* myQueue);
bool isFull(QUEUE* myQueue);
void put(QUEUE* myQueue, int a);
int get(QUEUE* myQueue);
int frontElement(QUEUE* myQueue);


#endif //QUEUESTATIC_FUNCTIONS_H
