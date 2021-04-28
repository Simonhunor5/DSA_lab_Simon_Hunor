//
// Created by Huni on 4/28/2021.
//

#ifndef BINARYSEARCHTREE_FUNCTIONS_H
#define BINARYSEARCHTREE_FUNCTIONS_H

typedef struct root
{
    char adat[10];
    struct root *bal;
    struct root *jobb;
}root;
root *create(char a[10]);
void insert(root **fa, char a[10]);
void inorder(root * fa );




#endif //BINARYSEARCHTREE_FUNCTIONS_H
