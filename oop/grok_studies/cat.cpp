#include <iostream>
#include <string>
using namespace std;

class Cat {
    private:
        string color;
    public:
        Cat(string c){
            color = c;
        }

        void meow(){
            cout << color << " cat says Meow!\n";
        }
};

int main () {
    Cat gato("Orange");
    gato.meow();

    return 0;
}