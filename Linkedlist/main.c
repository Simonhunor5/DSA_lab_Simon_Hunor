#include <stdio.h>
#include <stdlib.h>

#include "functions.h"

int main() {

    FILE * f = fopen("import.txt", "r");

    Person person;

    Node* first = create();

   // Person a;

   // fscanf(f, "%s", a.firstname);
   // fscanf(f, "%i", &a.age);

   int i = 0;

    while(!feof(f))
    {
        i++;
        fscanf(f, "%s", person.firstname);
        fscanf(f, "%i", &person.age);

        if(i == 1)
        {
            first->person = person;
        }else
        {
            push(first, person);
        }


    }

    //pop(first);

    printList(first);

    fclose(f);


    return 0;
}
