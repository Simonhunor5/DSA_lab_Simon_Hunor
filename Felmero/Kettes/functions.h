//
// Created by Huni on 4/20/2021.
//

#ifndef KETTES_FUNCTIONS_H
#define KETTES_FUNCTIONS_H

typedef struct{
    int digit;
    struct Node* next;
}Node ;


Node* create();
void insert(Node* head, int digit);
void print(Node* head);
void destroy(Node** head);
void printToFiles(Node* head);

#endif //KETTES_FUNCTIONS_H
