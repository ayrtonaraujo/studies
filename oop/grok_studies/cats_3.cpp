#include <iostream>
#include <string>
using namespace std;

class Cat {
    private:
        string color;
        int age;

    public:
        Cat (string c, int a) {
            color = c;
            age = a;
        }

        void meow(){
            cout << color << " cat (age " << age << ") says Meow!" << endl;
        }

        string getColor(){
            return color;
        }

        int getAge(){
            return age;
        } 

        void setColor (string c){
            color = c;           
        }

        void setAge (int a){
            age = a;           
        }
        
};

int main () {
    Cat cat("Blue", 3);
    cat.meow();
    cout << "Age: " << cat.getAge() << endl;
    cat.setColor("Green");
    cat.meow();


    return 0;
}