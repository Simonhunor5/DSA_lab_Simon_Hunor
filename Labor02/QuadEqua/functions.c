//
// Created by Huni on 2/28/2021.
//

#include <math.h>

#include "functions.h"

struct Roots calcQuadEqua(struct Values value)
{
    struct Roots roots;
    float discriminant;

    discriminant = value.b * value.b - 4 * value.a * value.c;

    if(discriminant > 0) {
        roots.root1 = (-value.b + sqrt(discriminant)) / (2 * value.a);
        roots.root2 = (-value.b - sqrt(discriminant)) / (2 * value.a);
        return roots;
    }
    else if(discriminant == 0) {
        roots.root1 = roots.root2 = -value.b / (2 * value.a);
        return roots;
    }
    else{
        float realPart = -value.b / (2 * value.a);
        float imagPart = sqrt(-discriminant) / (2 * value.a);
        roots.root1 = realPart + imagPart;
        roots.root2 = realPart - imagPart;
        return roots;
    }
}