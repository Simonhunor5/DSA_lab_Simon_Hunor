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

    for(int i = 0; i < n; i++)
    {
        printf("%f ", *(arr + i));
    }
    printf("\n");

    mirror(arr, n);

    free(arr);

    return 0;
}
