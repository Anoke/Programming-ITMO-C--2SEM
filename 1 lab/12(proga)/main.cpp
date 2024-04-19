#include <iostream>
#include "func.h"

using namespace std;

int main() {
    circle circ;
    cin >> circ.x >> circ.y;
    double x, y;
    cin >> x >> y;
    cout << "Circle center coords: " << "(" << circ.x << ";" << circ.y << ")";
    cout << "Vector: " << "{" << x << ";" << y << "}";
    func::CircleMove1(circ, x, y);
    cout << "Move center of the circle coords with links: " << "(" << circ.x << ";" << circ.y << ")";
    func::CircleMove2(&circ, &x, &y);
    cout << "Move center of the circle coords with pointers: " << "(" << circ.x << ";" << circ.y << ")";
    return 0;
}
