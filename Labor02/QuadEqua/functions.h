//
// Created by Huni on 2/28/2021.
//

#ifndef QUADEQUA_FUNCTIONS_H
#define QUADEQUA_FUNCTIONS_H

typedef struct Values{
    float a, b, c;
};

typedef struct Roots{
    float root1, root2;
};


struct Roots calcQuadEqua(struct Values value);

#endif //QUADEQUA_FUNCTIONS_H
