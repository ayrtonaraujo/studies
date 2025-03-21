#include <iostream>
#include <string>
using namespace std;


class Car {
    public:
        string model;
    
    Car (string m) {
        model = m;
    }

    void drive() {
        cout << model << " is driving!" << endl;
    }
};



int main () {

    Car toyota("Toyota");
    toyota.drive();

    return 0;
}