#include "fun.h"

namespace fun{
    void fli1(float *a){
        *a = (int) *a;
    }
    void fli2(float &a){
        a = (int)a;
    }
}