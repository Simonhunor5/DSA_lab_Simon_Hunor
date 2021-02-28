#include <stdio.h>

#include "functions.h"

int main() {
    struct Values value;
    printf("a: ");
    scanf("%f", &value.a);
    printf("b: ");
    scanf("%f", &value.b);
    printf("c: ");
    scanf("%f", &value.c);

    struct Roots roots;

    roots = calcQuadEqua(value);

    printf("Root 1 is: %f", roots.root1);
    printf("Root 2 is: %f", roots.root2);

    return 0;
}
