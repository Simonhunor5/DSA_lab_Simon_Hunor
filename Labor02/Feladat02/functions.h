//
// Created by Huni on 2/23/2021.
//

#ifndef FELADAT02_FUNCTIONS_H
#define FELADAT02_FUNCTIONS_H

typedef struct LinearSearchResult{
    int i;
    unsigned int count;
};

void fillArr(int* arr, int n);
void printArr(int* arr, int n);
struct LinearSearchResult linearSearch(int* arr, int n, int x);

#endif //FELADAT02_FUNCTIONS_H
