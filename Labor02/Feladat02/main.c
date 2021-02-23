#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

    int result = linearSearch(arr, n, x);

    if(result == -1)
    {
        printf("Item was not found");
    }else
    {
        printf("The location of the element is: %i", result);
    }


    free(arr);

    return 0;
}
