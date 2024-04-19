#include "func.h"

namespace func{
    void CircleMove1(circle& obj, double& x, double& y){
        obj.x += x;
        obj.y += y;
    }
    void CircleMove2(circle* obj, double* x, double* y){
        obj->x += *x;
        obj->y += *y;
    }
}