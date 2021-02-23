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

struct LinearSearchResult linearSearch(int* arr, int n, int x)
{
    struct LinearSearchResult result;
    result.count = 0;
    for(int i = 0; i < n; i++)
    {
        result.count++;

        if(*(arr + i) == x) {
            result.i = i;
            return result;
        }

    }
    result.i = -1;
    return result;
}
