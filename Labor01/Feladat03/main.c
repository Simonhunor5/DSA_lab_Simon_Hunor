#include <stdio.h>
#include <stdlib.h>

#include "functions.h"

int main() {
    int n;
    printf("n=");
    scanf("%i", &n);

    int* arr;

    arr = (int*)malloc(n * sizeof(int));

    int min = -25, max = 25;

    for(int i = 0; i < n; i++)
    {
        *(arr + i) = (rand() % (max - min) + 1) + min;

    }

    printf("Number of even numbers: %i\n", even(arr, n));
    printf("Number of odd numbers: %i\n", odd(arr, n));
    printf("Number of negative numbers: %i\n", neg(arr, n));
    printf("Number of positive numbers: %i\n", pos(arr, n));

    free(arr);

    return 0;
}
