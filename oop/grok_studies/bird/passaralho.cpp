#include <iostream>
#include <string>
using namespace std;

class Bird {
    private:
        string type;
    
        public:
    Bird (string t) {
        type = t;
    }

    void fly(){
       cout << type << " is flying!" << endl; 
    }
    
};