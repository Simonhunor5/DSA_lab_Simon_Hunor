//
// Created by Huni on 4/13/2021.
//

#ifndef LAB8_FUNCTIONS_H
#define LAB8_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int meret;
    int* szamok;
}Array;

Array* create(int meret);

void fillArray(Array* array);

void printArray(Array* array);

#endif //LAB8_FUNCTIONS_H
