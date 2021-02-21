#include <stdio.h>
#include "functions.h"

int main() {
    int a, b, c;
    printf("a=");
    scanf("%i", &a);
    printf("b=");
    scanf("%i", &b);
    printf("c=");
    scanf("%i", &c);

    printf("Max: %i\n", max(a, b, c));
    printf("Min: %i\n", min(a, b ,c));
    return 0;
}
