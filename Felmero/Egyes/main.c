#include <stdio.h>

#include "functuins.h"
#include <string.h>

int main() {
    char *ptr;

    QUEUE* myQueue;

    myQueue = create(10);

    printf("Give me the word under 10 caracters:");

    scanf("%s", ptr);


    strcpy(myQueue->items, ptr);

    print(myQueue);


    return 0;
}
