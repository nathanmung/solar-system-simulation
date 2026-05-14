#ifndef BODY_H
#define BODY_H
#include "vector3.h"

// A body can be the Sun, a planet, a moon...

typedef struct body{

    char name[100];
    double mass; // unit is kg (kilogram)
    double radius; // unit is m (meter)
    Vector3* position; 
    Vector3* velocity;
    Vector3* acceleration;

} Body ;

// Acceleration has to be 0 because when we create the body, no forces are applied to it. 

Body* create_body(char n[], double m, double r, Vector3* p, Vector3* v) ;

#endif

