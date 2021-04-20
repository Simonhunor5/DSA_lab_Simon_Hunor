//
// Created by Huni on 4/20/2021.
//

#include "functuins.h"

#include <stdlib.h>
#include <stdio.h>


QUEUE* create(int capacity)
{
    QUEUE* myQueue;

    myQueue = (QUEUE*)malloc(sizeof(QUEUE));

    if(!myQueue)
    {
        printf("Error!");
        return NULL;
    }

    myQueue->front = -1;
    myQueue->rear = -1;
    myQueue->maxsize = capacity;

    myQueue->items = (char*)malloc(myQueue->maxsize * sizeof(char));

    if(!myQueue->items)
    {
        printf("Error");
        return NULL;
    }

    return myQueue;

    /*Letrehozzuk minden erteket beapatiunk max size a front rear meg ugyan ott van -1 nel mer turess*/
}

bool isEmpty(QUEUE* myQueue)
{
    return ((myQueue->rear >= myQueue->front) && myQueue->front == -1) || myQueue->rear < myQueue->front;
}

bool isFull(QUEUE* myQueue)
{
    return myQueue->maxsize - 1 == myQueue->rear;
}

void insert(QUEUE* myQueue, char a)
{
    if(!isFull(myQueue))
    {
        if(!isEmpty(myQueue))
        {
            myQueue->rear++;
            myQueue->items[myQueue->rear] = a;
        }else
        {
            myQueue->rear++;
            myQueue->items[myQueue->rear] = a;
            myQueue->front++;
        }
    }
    /*Megnezzuk full-e ha nem akkor rakunk bele es ha ires akkor csak az elejere rakunk es a veget noveljuk cask az elejet nem*/
}

void print(QUEUE* myQueue)
{
    for (int i = 0; i < myQueue->maxsize; ++i) {
        printf("%c ", myQueue->items[i]);
    }
    /*Sima kiiratas*/
}


void destroy(QUEUE* myQueue)
{
    free(myQueue->items);
    free(myQueue);
}