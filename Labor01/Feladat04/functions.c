//
// Created by Huni on 2/21/2021.
//
#include <stdio.h>
#include "functions.h"

void mirror(float* arr, int n)
{
    for(int i = n - 1; i >= 0; i--)
    {
        printf("%f ", *(arr + i));
    }
}