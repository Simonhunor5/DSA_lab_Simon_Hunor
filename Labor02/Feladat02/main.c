#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "math.h"

#include "functions.h"

int main() {

    clock_t begin = clock();

    int n, x;

    printf("n=");
    scanf("%i", &n);

    int* arr;

    arr = (int*)malloc(n * sizeof(int));

    fillArr(arr ,n);
    printArr(arr ,n);

    printf("Item=");
    scanf("%i", &x);

    int result = linearSearch(arr, n, x);

    if(result == -1)
    {
        printf("Item was not found\n");
    }else
    {
        printf("The location of the element is: %i\n", result);
    }


    free(arr);

    clock_t end = clock();

    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("The spent: %f\n", time_spent);
    printf("The number of operations: %f", time_spent*(2*pow(10,8)));

    return 0;
}
