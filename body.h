#ifndef BODY_H
#define BODY_H
#include "vector3.h"

typedef struct body{

    char name[100];
    double mass;
    double radius;
    Vector3 position;
    Vector3 velocity;
    Vector3 acceleration;

} Body ;

#endif