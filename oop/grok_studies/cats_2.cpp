#include <iostream>
#include <string>
using namespace std;

class Cat {
    private:
        string color;

    public:
        Cat (string c) {
            color = c;
        }

        void meow(){
            cout << color << " cat says Meow!" << endl;
        }

        string getColor(){
            return color;
        }

        void setColor (string c){
            color = c;           
        }
        
};

int main () {
    Cat gray("Gray");
    gray.meow();
    Cat white("White");
    white.meow();
    cout << "Color: " << white.getColor() << endl;


    return 0;
}