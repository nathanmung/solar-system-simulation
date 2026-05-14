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

Body create_body(char n[], double m, double r, Vector3 p, Vector3 v) ;

#endif

