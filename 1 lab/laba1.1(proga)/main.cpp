#include <iostream>
#include "fun.h"

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    fun::swap1(&a,&b);
    cout << a << " " << b << endl;
    fun::swap2(a,b);
    cout << a << " " << b;
    return 0;
}
