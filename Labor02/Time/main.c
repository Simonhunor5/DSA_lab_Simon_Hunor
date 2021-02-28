#include <stdio.h>

#include "functions.h"

int main() {

    int sec;

    printf("Enter the seconds: ");
    scanf("%i", &sec);

    struct Time result = convertTime(sec);

    printf("H:M:S - %d:%d:%d\n",result.h, result.m, result.s);

    return 0;
}
