#include <iostream>
#include <algorithm>
#include "CircleBuffer.h"
using namespace std;

template <typename T>
void print(CircularBuffer<T>& buffer) {
    for (typename CircularBuffer<T>::Iterator iterator = buffer.begin(); iterator != buffer.end(); ++iterator) {
        cout << *iterator << " ";
    }
    cout << endl;
}

bool isPositive(int a) {
    return a > 0;
}

int main() {
    CircularBuffer<int> buf(2);
    buf.addLast(5);
    buf.addLast(1);
    buf.addLast(3);
    buf.addLast(7);
    for (int Iterator : buf) {
        cout << Iterator << " ";
    }
    cout << endl;
    buf.removeLast();
    for (CircularBuffer<int>::Iterator Iterator = buf.begin(); Iterator != buf.end(); ++Iterator) {
        cout << *Iterator << " ";
    }
    cout << endl;
    buf.removeLast();
    buf.addFirst(2);
    for (CircularBuffer<int>::Iterator Iterator = buf.begin(); Iterator != buf.end(); ++Iterator) {
        cout << *Iterator << " ";
    }
    cout << endl;
    buf.addFirst(8);
    for (CircularBuffer<int>::Iterator Iterator = buf.begin(); Iterator != buf.end(); ++Iterator) {
        cout << *Iterator << " ";
    }
    cout << endl;
    buf.addByIndex(1, 9);
    for (CircularBuffer<int>::Iterator Iterator = buf.begin(); Iterator != buf.end(); ++Iterator) {
        cout << *Iterator << " ";
    }
    cout << endl;
    buf.removeByIndex(0);
    for (CircularBuffer<int>::Iterator Iterator = buf.begin(); Iterator != buf.end(); ++Iterator) {
        cout << *Iterator << " ";
    }
    cout << endl;
    buf.changeCapacity(5);
    print(buf);
    buf.addLast(6);
    buf.addLast(14);
    buf.addLast(32);
    buf.addLast(90);
    print(buf);
    buf.addLast(12);
    print(buf);
    buf.addLast(27);
    print(buf);
    buf.addFirst(128);
    print(buf);
    cout << buf.size() << endl;
    print(buf);
    CircularBuffer<int>::Iterator it = find(buf.begin(), buf.end(), 1);
    cout << ((it != buf.end()) ? *it : -1) << endl;
    it = max_element(buf.begin(), buf.end());
    cout << *it << endl;
    cout << ((is_sorted(buf.begin(), buf.end())) ? "TRUE" : "FALSE") << endl;
    it = min_element(buf.begin(), buf.end());
    cout << *it << endl;
    cout << count(buf.begin(), buf.end(), 5) << endl;
    cout << ((all_of(buf.begin(), buf.end(), isPositive)) ? "TRUE" : "FALSE") << endl;
    buf.addLast(-1);
    print(buf);
    cout << ((all_of(buf.begin(), buf.end(), isPositive)) ? "TRUE" : "FALSE") << endl;
    CircularBuffer<int> buffer(4);
    buffer.addLast(4);
    buffer.addLast(3);
    buffer.addLast(2);
    buffer.addLast(1);
    sort(buffer.begin(), buffer.end());
    print(buffer);
    buffer.removeFirst();
    print(buffer);

    return 0;
}