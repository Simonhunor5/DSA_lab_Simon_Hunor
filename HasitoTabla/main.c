#include <stdio.h>
#include <stdlib.h>

#include "functions.h"
int main() {


    insert(1, 12);
    insert(2, 14);
    insert(3, 15);
    insert(4, 22);
    insert(5, 25);
    insert(6, 2);
    insert(7, 16);
    insert(8, 17);
    insert(9, 7);
    insert(10, 14);

    display();

    item = search(12);

    if(item != NULL) {
        printf("Element found: %d\n", item->data);
    } else {
        printf("Element not found\n");
    }

    delete(item);

   item = search(12);

   // display();

   if(item != NULL) {
       printf("Element found: %d\n", item->data);
   } else {
       printf("Element not found\n");
   }

    return 0;
}
