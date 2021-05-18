//
// Created by Huni on 5/18/2021.
//
#include <stdio.h>
#include "functions.h"


int hashCode(int key) {
    return key % SIZE;
}

void insert(int key,int data) {

    DataItem* item = (DataItem*) malloc(sizeof(DataItem));
    item->data = data;
    item->key = key;

    int hashIndex = hashCode(data);

    while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1) {
        ++hashIndex;

        hashIndex %= SIZE;
    }

    hashArray[hashIndex] = item;
}

DataItem *search(int data) {

    int hashIndex = hashCode(data);


    while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1) {

        if(hashArray[hashIndex]->data == data)
            return hashArray[hashIndex];


        ++hashIndex;

        hashIndex %= SIZE;
    }

    return NULL;
}

void display() {
    int i = 0;

    for(i = 0; i<SIZE; i++) {

        if(hashArray[i] != NULL)
            printf(" (%d,%d)",hashArray[i]->key,hashArray[i]->data);
        else
            printf(" ~~ ");
    }

    printf("\n");
}

DataItem* delete(DataItem* item) {
    int key = item->data;

    DataItem* dummyItem = (DataItem*) malloc(sizeof(DataItem));
    dummyItem->data = -1;
    dummyItem->key = -1;


    int hashIndex = hashCode(key);


    while(hashArray[hashIndex] != NULL) {

        if(hashArray[hashIndex]->data == key) {
            DataItem* temp = hashArray[hashIndex];

            hashArray[hashIndex] = dummyItem;
            return temp;
        }

        ++hashIndex;

        hashIndex %= SIZE;
    }

    return NULL;
}