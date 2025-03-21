#include <iostream>
#include <string>
using namespace std;

class Phone {
    private:
        string brand;
    public:
        Phone (string b) {
            brand = b;
        }

        void call () {
            cout << brand << " is calling!" << endl;
        }

};

int main () {

    Phone samsung("Samsung");
    samsung.call();

    return 0;
}