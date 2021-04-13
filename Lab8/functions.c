//
// Created by Huni on 4/13/2021.
//

#include "functions.h"

Array* create(int meret)
{
    Array* array = (Array*)malloc(sizeof(Array));

    if(!array)
    {
        printf("Error!");
        return NULL;
    }

    array->meret = meret;

    array->szamok = (int*)malloc(array->meret * sizeof(int));

    return array;

}

void fillArray(Array* array)
{
    for(int i = 0; i < array->meret; i++)
    {
        array->szamok[i] = i + 1;
    }
}

void printArray(Array* array)
{
    for(int i = 0; i < array->meret; i++)
    {
        printf("%i ", array->szamok[i]);
    }

    printf("\n");
}