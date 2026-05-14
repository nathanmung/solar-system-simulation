#ifndef BODY_H
#define BODY_H
#include "vector3.h"

typedef struct body{

    char name[100];
    double mass;
    double radius;
    Vectors3 position;
    Vectors3 speed;
    Vectors3 acceleration;

} Body ;

#endif