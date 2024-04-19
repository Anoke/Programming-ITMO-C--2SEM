#include <iostream>
#include "fun.h"

using namespace std;

int main() {
    float a;
    cin >> a;
    float b = a;
    fun::fli1(&a);
    cout << a << endl;

    fun::fli2(b);
    cout << b;

    return 0;
}
