//
// Created by Huni on 2/21/2021.
//

#include "functions.h"

float sum(float* arr, int n)
{
    float sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }

    return sum;
}

float prod(float* arr, int n)
{
    float prod = 1;
    for(int i = 0; i < n; i++)
    {
        prod *= *(arr + i);
    }

    return prod;
}

float avg(float* arr, int n)
{
    float sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }

    return sum/n;
}