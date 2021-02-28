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

struct BinarySearchResult binarySearch(int* arr, int l, int r, int x)
{
    struct BinarySearchResult mid;
    if (r >= l) {


        mid.i =  l + (r - l) / 2;
        mid.count = 0;


        if (*(arr + mid.i) == x)
        {
            mid.count++;
            return mid;
        }

        if (*(arr + mid.i) > x)
        {
            mid.count++;
            return binarySearch(arr, l, mid.i - 1, x);
        }

        mid.count++;
        return binarySearch(arr, mid.i + 1, r, x);

    }

    mid.i = -1;
    return mid;
}

int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}