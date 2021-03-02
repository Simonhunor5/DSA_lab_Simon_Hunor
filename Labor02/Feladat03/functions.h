//
// Created by Huni on 2/28/2021.
//

#ifndef FELADAT03_FUNCTIONS_H
#define FELADAT03_FUNCTIONS_H

typedef struct BinarySearchResult{
    int i;
    unsigned int count;
};

void fillArr(int* arr, int n);
void printArr(int* arr, int n);
int cmpfunc (const void * a, const void * b);
struct BinarySearchResult binarySearch(int* arr, int l, int r, int x, int n);

#endif //FELADAT03_FUNCTIONS_H
