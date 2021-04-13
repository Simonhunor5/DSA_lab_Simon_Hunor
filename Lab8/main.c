#include <stdio.h>

#include "functions.h"

int main() {

    Array* array = create(20);

    fillArray(array);
    printArray(array);
    return 0;
}
