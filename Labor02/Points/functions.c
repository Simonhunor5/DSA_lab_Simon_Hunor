//
// Created by Huni on 2/28/2021.
//

#include <math.h>

#include "functions.h"
float calcDist(struct Point a, struct Point b)
{
    return sqrt(pow(a.x - b.x,2) + pow(a.y - b.y,2));
}