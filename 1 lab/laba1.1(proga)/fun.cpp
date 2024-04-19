#include "fun.h"

namespace fun{
    void swap1(int *ta,int*tb){
        int tmp = *ta;
        *ta = *tb;
        *tb = tmp;
    }
    void swap2(int &ta,int &tb){
        int tmp = ta;
        ta = tb;
        tb = tmp;
    }
}