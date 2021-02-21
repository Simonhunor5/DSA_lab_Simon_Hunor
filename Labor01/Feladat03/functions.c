//
// Created by Huni on 2/21/2021.
//
#include "functions.h"

int even(int* arr,int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(*(arr + i) % 2 == 0)
        {
            count++;
        }
    }

    return count;
}
int odd(int* arr,int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(*(arr + i) % 2 != 0)
        {
            count++;
        }
    }

    return count;
}
int neg(int* arr,int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(*(arr + i) < 0)
        {
            count++;
        }
    }

    return count;
}
int pos(int* arr,int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(*(arr + i) >= 0)
        {
            count++;
        }
    }

    return count;
}