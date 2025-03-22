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

        /*
        void getColor() {
            cout << "Color: " << color << endl;
        }
        */ //errei no get
        
        string getColor(){
            return color;
        }

        void setColor (string c){
            color = c;           
        }
        
};

int main () {
    Cat orange("Orange");
    orange.meow();
    //orange.getColor(); __ estava assim
    cout << "Color: " << orange.getColor() << endl;
    orange.setColor("Black");
    orange.meow();


    return 0;
}