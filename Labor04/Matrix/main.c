#include <stdio.h>

#include "functions.h"

int main() {

    Matrix* matrix;

    readMatrix("input.txt", &matrix);
    printMatrix(matrix);

    deleteRow(matrix, matrix->rows - 1);
    printMatrix(matrix);

    printf("Minimum: %i", minimum(matrix));

    return 0;

    return 0;
}
