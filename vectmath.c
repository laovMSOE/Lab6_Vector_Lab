#include "vectmath.h"

vect add(vect a, vect b)
{
    vect returnval;
    returnval.x = a.x + b.x;
    returnval.y = a.y + b.y;
    returnval.z = a.z + b.z;

    return returnval;
}

vect sub(vect a, vect b)
{
    vect returnval;
    returnval.x = a.x - b.x;
    returnval.y = a.y - b.y;
    returnval.z = a.z - b.z;

    return returnval;
}

vect multscalar(vect a, float scalar)
{
    vect returnval;
    returnval.x = a.x * scalar;
    returnval.y = a.y * scalar;
    retrunval.z = a.z * scalar;

    return returnval;
}

