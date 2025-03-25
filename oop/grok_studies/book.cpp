#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
    string title;
    void read(){
        cout << "Reading " << title << "." << endl;
    }
};

int main () {   
    Book harry_potter;
    harry_potter.title = "Harry Potter";
    harry_potter.read();

    return 0;
}