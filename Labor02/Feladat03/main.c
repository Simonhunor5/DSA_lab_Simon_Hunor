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



    qsort(arr, n, sizeof(int), cmpfunc);

    printf("The sorted array is: ");
    printArr(arr ,n);

    printf("Item=");
    scanf("%i", &x);


    struct BinarySearchResult result = binarySearch(arr, 0, n - 1, x, n);



    if(result.i == -1)
    {
        printf("Item was not found\n");
    }else
    {
        printf("The location of the element is: %i\n", result.i);
    }

    clock_t end = clock();


    free(arr);

    printf("The number of operations: %ld\n", result.count);



    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;


    printf("The spent: %f\n", time_spent);


    return 0;
}