//
// Created by Huni on 4/13/2021.
//

#include "functions.h"
#include <string.h>

struct node *head = NULL;
struct node *current = NULL;

struct Node* fill(FILE* filename) {

    struct Node *link = ( struct Node*) malloc(sizeof(struct Node));

    FILE *f = fopen(filename, "r");


    for(int i = 0; i < 20; i++){
         fscanf(f, "%s", link->firstname);
         fscanf(f, "%i", &link->age);

        link->next = head;

        head = link;
    }

    return link;
}

void printList() {
    struct Node *ptr = head;
    printf("\n[ ");

    //start from the beginning
    for(int i = 0; i < 20; i++){
        printf("(%s,%d) ",ptr->firstname,ptr->age);
        ptr = ptr->next;
    }

    printf(" ]");
}