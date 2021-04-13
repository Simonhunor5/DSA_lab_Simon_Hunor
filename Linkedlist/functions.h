//
// Created by Huni on 4/13/2021.
//

#ifndef LINKEDLIST_FUNCTIONS_H
#define LINKEDLIST_FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>

struct Node{
    int age;
    char firstname[20];
    struct Node* next;
}Node ;



struct Node* fill(FILE* filename);
void printList();

#endif //LINKEDLIST_FUNCTIONS_H
