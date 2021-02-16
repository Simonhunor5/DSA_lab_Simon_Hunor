#include <stdio.h>

int add(int a, int b);

int main() {
    int a, b, sum;
    printf("a=" );
    scanf("%i", &a);
    printf("b=" );
    scanf("%i",&b);

    sum = add(a, b);

    printf("Sum is : %i", sum);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}