//
// Created by Huni on 2/21/2021.
//
#include "functions.h"

int max(int a,int b, int c)
{
    if( a > b)
    {
        if(a > c)
        {
            return a;
        }else
        {
            return c;
        }
    }else
    {
        if(b > c)
        {
            return b;
        }else
        {
            return c;
        }
    }
}

int min(int a,int b, int c)
{
    if( a < b)
    {
        if(a < c)
        {
            return a;
        }else
        {
            return c;
        }
    }else
    {
        if(b < c)
        {
            return b;
        }else
        {
            return c;
        }
    }
}