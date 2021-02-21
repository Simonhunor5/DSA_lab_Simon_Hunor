#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "functions.h"

int main() {
    int n;
    printf("n=");
    scanf("%i", &n);

    float* arr;

    arr = (float*)malloc(n * sizeof(float));

    srand(time(NULL));

    for(int i = 0; i < n; i++)
    {
        *(arr + i) = (float)rand() / ((float)RAND_MAX/100);
    }

    printf("The sum is: %f\n", sum(arr, n));
    printf("The product is: %f\n", prod(arr, n));
    printf("The avrage is: %f\n", avg(arr, n));

    free(arr);

    return 0;
}
