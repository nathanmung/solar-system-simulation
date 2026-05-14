#include <stdlib.h>
#include <stdio.h>
#include "body.h"


Body* create_body(char n_source[], double m, double r, Vector3* p, Vector3* v){

    Body* body = malloc(sizeof(Body));

    if (body == NULL)
        return NULL ;

    snprintf(body->name, sizeof(body->name), "%s", n_source) ;

    body->mass = m ;
    body->radius = r ;
    body->position = p ;
    body->velocity = v ;

    // acceleration is 0 because there is no force applied to the body yet

    Vector3* body_acc = malloc(sizeof(Vector3));

    body_acc->x = 0 ;
    body_acc->y = 0 ;
    body_acc->z = 0;

    body->acceleration = body_acc;

    return body;
}


