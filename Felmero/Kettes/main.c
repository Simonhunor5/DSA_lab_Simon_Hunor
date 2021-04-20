#include <stdio.h>

#include "functions.h"

int main() {
    int number;
    printf("Enter the maximum 10 digits number: ");
    scanf("%i", &number);



    Node* first = create();

    int i = 0;

    while(number > 0)
    {
        i++;
        if(i == 1)
        {
            first->digit = number % 10;
        }else{
            insert(first, number % 10);
        }

        number /= 10;
    }

    print(first);

    printToFiles(first);

    destroy(first);

    print(first);

    return 0;
}

/*
 * 2.      Tároljátok egy egyszeresen láncolt listában egy legtöbb 10
 * jegyű szám számjegyeit fordított sorrendben sorrendjében.
 * Írassátok ki a páros illetve páratlan számjegyeinek a számát egy állományba.

Írjátok meg a következő függvényeket: create, insert, print, destroy*/