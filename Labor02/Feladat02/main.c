#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "math.h"

#include "functions.h"

int main() {



    int n, x;

    printf("n=");
    scanf("%i", &n);

    int* arr;

    arr = (int*)malloc(n * sizeof(int));

    fillArr(arr ,n);
    printArr(arr ,n);

    printf("Item=");
    scanf("%i", &x);

    clock_t begin = clock();

    struct LinearSearchResult result = linearSearch(arr, n, x);

    clock_t end = clock();

    if(result.i == -1)
    {
        printf("Item was not found\n");
    }else
    {
        printf("The location of the element is: %i\n", result.i);
    }


    free(arr);

    printf("The number of operations: %ld\n", result.count);



    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;


    printf("The spent: %f\n", time_spent);


    return 0;
}
