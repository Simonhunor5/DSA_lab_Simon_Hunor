#include <stdio.h>
#include "functions.c"

int main() {

    int  a, b;
    printf("a=");
    scanf("%i", &a);
    printf("b=");
    scanf("%i", &b);

    printf("The sum is: %i", add(a, b));
    return 0;
}
