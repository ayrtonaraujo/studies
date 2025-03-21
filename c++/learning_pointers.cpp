#include <iostream>
using namespace std;


int main () {

    int x = 10;
    int* pointer = &x;

    cout << &x << endl;
    cout << pointer << endl;
    cout << &pointer << endl;
    cout << *pointer << endl;

    return 0;
}
