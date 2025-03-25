#include <iostream>
#include <string>
using namespace std;

class Cat {
    private:
        string color;
        int age;

    public:
        Cat (string c, int a ){
            age = a;
            color = c;
        }

        void meow() {
            cout << color << " cat (age " << age << ") says Meow!" << endl;
        }

        string getColor() {
           return color;
          
        }

        void setColor (string c) {
            color = c;
        }

        void setAge (int a) {
            age = a;
        }

        int getAge() {
           return age;
          
        }
};


int main () {

    Cat cat1 ("Red", 5);
    Cat cat2 ("Yellow", 2);

    cat1.meow();
    cout << "Color: " << cat1.getColor() << ", Age: " <<cat1.getAge() << endl;    
    cat2.meow();
    cout << "Color: " << cat2.getColor() << ", Age: " <<cat2.getAge() << endl;

    cat1.setAge(6);
    cat1.meow();

    return 0;
}