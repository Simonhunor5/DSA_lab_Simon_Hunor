//
// Created by Huni on 4/13/2021.
//

#include "functions.h"
#include <string.h>
#include <stdbool.h>

Node* create() {

    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->next = NULL;
    return newNode;
}
Node* getLast(Node* first)
{
    Node* last;

    last = first;

    while(last->next != NULL)
    {
        last = last->next;
    }

    return last;
}


int getSize(Node* first) {


    if (first == NULL){return 0;}

    int count = 1;

    while(first->next != NULL)
    {
        first = first->next;
        count++;
    }

    return count;
}

Node* getI(int i, Node* first)
{
    if (first == NULL){return NULL;}

    int count = 1;

    while(i != count && first->next != NULL)
    {
        first = first->next;
        count++;
    }

    if(i == count)
    {
        return first;
    }

    return NULL;
}

Person* pop(Node* first)
{


    if (first == NULL){ printf("The linked list is empty!"); return NULL;}

    Person* tmp;

    if (first->next == NULL)
    {
        tmp = &(first->person);
        free(first);
        return tmp;
    }

    while(((Node*)first->next)->next != NULL)
    {
        first = first->next;
    }

    tmp = &(first->person);

    free(first->next);

    first->next = NULL;

    return tmp;
}

void printList(struct Node* head)
{
    Node* ptr = head;
    while (ptr->next != NULL)
    {
        printf("%s , %i \n", ptr->person.firstname, ptr->person.age);
        ptr = ptr->next;
    }

}

/*
 *
 * void push(Node** head, Person data)
{
    // allocate a new node in a heap and set its data
    Node* newNode = create();
    newNode->person = data;

    // set the `.next` pointer of the new node to point to the current
    // first node of the list.
    newNode->next = *head;

    // change the head pointer to point to the new node, so it is
    // now the first node in the list.
    *head = newNode;
}*/

void push(Node* first, Person person)
{
    Node* newNode = create();
    newNode->person = person;

    getLast(first)->next = newNode;

}