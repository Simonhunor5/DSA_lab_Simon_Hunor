//
// Created by Huni on 5/18/2021.
//

#ifndef HASITOTABLA_FUNCTIONS_H
#define HASITOTABLA_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int data;
    int key;
}DataItem;

#define SIZE 10

DataItem* hashArray[SIZE];
DataItem* item;

int hashCode(int key);
void insert(int key,int data);
DataItem *search(int key);
void display();
DataItem* delete(DataItem* item);


#endif //HASITOTABLA_FUNCTIONS_H
