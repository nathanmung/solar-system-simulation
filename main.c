#include <stdlib.h>
#include <stdio.h>
#include "constants.h"
#include "body.h"

int main(void){

    char* nametest = malloc(sizeof(char)*4);
    snprintf(nametest,4,"%s","Sun");

    Vector3* Sun_pos = malloc(sizeof(Vector3));
    Sun_pos->x = 0.0;
    Sun_pos->y = 0.0;
    Sun_pos->z = 0.0;

    Vector3* Sun_velo = malloc(sizeof(Vector3));
    Sun_velo->x = 0.0;
    Sun_velo->y = 0.0;
    Sun_velo->z = 0.0;
    
    Body* Sun = create_body(nametest, SOLAR_MASS, SUN_RADIUS, Sun_pos, Sun_velo) ;

    printf("The celestial body's name is: %s \n", Sun->name);

    return 0 ;
}

