//
// Created by Huni on 3/16/2021.
//

#ifndef MATRIX_FUNCTIONS_H
#define MATRIX_FUNCTIONS_H

typedef struct {
    int rows;
    int cols;
    int** data;
} Matrix;

Matrix* createMatrix(int rows, int cols);

int minimum(Matrix* matrix);

void readMatrix(const char* fileName, Matrix **array);
void printMatrix(Matrix* array);
void deleteRow(Matrix* matrix, int nr);

#endif //MATRIX_FUNCTIONS_H
