#include <stdio.h>

#include "functions.h"

int main()
{
    FILE *f = fopen("be.txt", "r");
    root *tree;
    tree = NULL;

//állománykezelés
    char x[10];
    while(fscanf(f, "%s", x)!=EOF)
    {

        insert(&tree, x);
    }
    printf("Inorder: ");
    inorder(tree);



}