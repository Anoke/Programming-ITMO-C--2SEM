#pragma once

using namespace std;

struct circle{
    double x;
    double y;
    double z;
};

namespace func{
    void CircleMove1(circle&, double&, double&);
    void CircleMove2(circle*, double*, double*);
}