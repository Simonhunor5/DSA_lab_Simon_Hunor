#include <stdio.h>

#include "functions.h"

int main() {
    struct Point a,b;
    printf("a.x: ");
    scanf("%i", &a.x);
    printf("a.y: ");
    scanf("%i", &a.y);
    printf("b.x: ");
    scanf("%i", &b.x);
    printf("b.y: ");
    scanf("%i", &b.y);

    printf("The distance beetwen the two coordiantes is: %f", calcDist(a, b));

    return 0;
}
