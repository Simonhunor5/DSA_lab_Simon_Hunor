//
// Created by Huni on 4/13/2021.
//

#ifndef LINKEDLIST_FUNCTIONS_H
#define LINKEDLIST_FUNCTIONS_H

#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int age;
    char firstname[20];
}Person;


typedef struct{
    Person person;
    struct Node* next;
}Node ;


Node* create();
Node* getLast(Node* first);
Node* getI(int i, Node* first);
//void push(Node** head, Person data);
void push(Node* first, Person person);
Person* pop(Node* first);
void printList(struct Node* head);

#endif //LINKEDLIST_FUNCTIONS_H
