#include <stdio.h>

#include "functions.h"

int main() {

    struct Node* node = fill("import.txt");
    printList();
    return 0;
}
