//
// Created by Huni on 2/28/2021.
//

#include "functions.h"

struct Time convertTime(int sec)
{
    struct Time time;

    time.h = (sec/3600);

    time.m = (sec - (3600 * time.h)) / 60;

    time.s = (sec - (3600 * time.h) - (time.m * 60));

    return time;

}