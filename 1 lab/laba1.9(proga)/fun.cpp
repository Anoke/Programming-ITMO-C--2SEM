#include "fun.h"
#include "complex"

namespace fun{
    void multi1(std::complex<double>*b, float *a){
        *b *= *a;
    }
    void multi2(std::complex<double>&b, float &a){
        b *= a;
    }
}