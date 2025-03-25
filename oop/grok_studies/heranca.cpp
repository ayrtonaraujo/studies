#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    string species;
    string name;

    Animal (string s, string n) {
        species = s;
        name = n;
    }

    string getSpecies () {
        return species;
    }

};

class Cats : public Animal {
public:
    Cats (string s, string n) : Animal(s,n) {
    }

    string getName (){
        return name;
    }

    void meow(){
        cout << name << " says Meow!" << endl;
    }
};

int main () {
    Cats cat1("Feline", "Bob");
    cat1.meow();
    cout << cat1.getName() << " is a " << cat1.getSpecies() << "." << endl;
 
    return 0;
}