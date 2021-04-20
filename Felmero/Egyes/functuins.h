//
// Created by Huni on 4/20/2021.
//

/*1.      Tároljátok egy félstatikus sorban egy legtöbb 10
 * betűből álló szó karaktereit előforulásuk sorrendjében.
 * Írassátok ki a magánhangzókat és a mássalhangzókat egy-egy állományba.

Írjátok meg a következő függvényeket: create, insert, print, destroy*/

#ifndef EGYES_FUNCTUINS_H
#define EGYES_FUNCTUINS_H

#include <stdbool.h>

typedef struct{
    int maxsize;
    int front, rear;
    char* items;
}QUEUE;

QUEUE* create(int capacity);
bool isEmpty(QUEUE* myQueue);
bool isFull(QUEUE* myQueue);
void insert(QUEUE* myQueue, char a);
void print(QUEUE* myQueue);
void destroy(QUEUE* myQueue);

#endif //EGYES_FUNCTUINS_H
