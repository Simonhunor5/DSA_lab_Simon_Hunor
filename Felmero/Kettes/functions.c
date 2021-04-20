//
// Created by Huni on 4/20/2021.
//

#include "functions.h"

#include <stdio.h>
#include <stdlib.h>

Node* create() {

    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->next = NULL;
    return newNode;

    /* Letrehozzuk, a kovetkezot nullara allitjuk*/
}



void insert(Node* head, int digit)
{
    Node* newNode = create();
    newNode->digit = digit;

    //getLast(head)->next = newNode;

    Node* last;

    last = head;

    while(last->next != NULL)
    {
        last = last->next;
    }

    last->next = newNode;


    /* Meghivjuk a mar ismert createt az info megkapja az infot azutan pedig  megkeressuk az utolso elemet es hoozavetoleg a kovetkezore atalitsuk*/
}

void print(Node* head)
{
    Node* ptr = head;
    while (ptr)
    {
        printf("%i ", ptr->digit);
        ptr = ptr->next;
    }
    /*Kiiratjuk while ciklussal*/
}

void destroy(Node** head)
{
    Node* current = *head;
    Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;

    /*toroljuk az eges sort azaal hogy vegig megyunk rajta es freeljuk majd next es vegula  headet is*/
}


void printToFiles(Node* head)
{
    Node* ptr = head;
    int odds = 0, evens = 0;
    while (ptr)
    {
        if(ptr->digit % 2 == 0)
        {
            evens++;
        }else
        {
            odds++;
        }

        ptr = ptr->next;
    }

    FILE *fptr = fopen("sample.txt", "w");

    fprintf(fptr,"ODDS. %i \n"
                 "EVENS. %i \n", odds, evens);

    fclose(fptr);

    /*Vegig megyunk es szamlaljuk a parosakat s paratlanokat*/
}