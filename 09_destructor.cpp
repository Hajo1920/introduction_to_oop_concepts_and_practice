#include <iostream>

using namespace std;

class clsPerson {
    private:
    string _name;

    public:

    clsPerson(){
        _name = "Ahmed Osman";
        cout << "Welcome from constructor " << _name << endl;
    }

    ~clsPerson(){ // this is destructor
    cout << "Have a nice day " << _name << endl;
    }
};

int main(){

    clsPerson Person;
    return 0;
}