#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        string name;

        Person (string n) {
            name = n;
        }

        void sayHello() {
            cout << "Oi, I'm "<<name <<".";
        }
};

int main ()
{
    Person luana("Luana");
    luana.sayHello();

    return 0;
}