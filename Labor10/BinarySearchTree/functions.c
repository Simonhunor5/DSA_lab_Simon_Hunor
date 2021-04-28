//
// Created by Huni on 4/28/2021.
//

#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insert(root **fa, char a[10])
{
    if((*fa) == NULL)
    {
        (*fa) = create(a);
    }
    else
    {
        if(strcmp(a, (*fa)->adat) < 0){
            insert(&((*fa)->bal),a);
        }
        else{
            insert(&((*fa)->jobb),a);
        }
    }
}

root *create(char a[10])
{
    root *ag;
    ag = (root *)malloc(sizeof(root));
    if(!ag)
    {
        printf("Sikertelen lefoglalas");
        return 0;
    }
    strcpy(ag->adat, a);
    ag->jobb = NULL;
    ag->bal = NULL;
    return ag;
}

void inorder(root *fa)
{
    if(fa->bal)
        inorder(fa->bal);
    printf("%3s ", fa->adat);
    if(fa->jobb)
        inorder(fa->jobb);
}