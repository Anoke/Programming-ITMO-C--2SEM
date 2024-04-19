#include <iostream>
#include "complex"
#include "fun.h"
using namespace std;

int main() {
    double x,y;
    cin >> x >> y;
    complex<double> z(x,y);
    float a;
    cin >> a;
    complex<double> z2 = z;
    float b = a;
    fun::multi1(&z,&a);
    cout << z << endl;

    fun:: multi2(z2,b);
    cout << z2;

    return 0;
}
