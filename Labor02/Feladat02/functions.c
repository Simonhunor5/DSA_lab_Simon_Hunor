//
// Created by Huni on 2/23/2021.
//

#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

void fillArr(int* arr, int n)
{
    int top = n, bot = 1;
    for(int i = 0; i < n; i++)
    {
        *(arr + i) = (rand() % (top - bot + 1)) + bot;
    }

}

void printArr(int* arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%i ", *(arr + i));
    }
    printf("\n");
}

int linearSearch(int* arr, int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if(*(arr + i) == x)
        {
            return i;
        }
    }

    return -1;
}
