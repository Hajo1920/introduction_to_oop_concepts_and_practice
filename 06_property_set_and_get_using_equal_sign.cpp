#include <iostream>
#include <string>

using namespace std;

class clsStuden {

    private:
    string _firstName;
    string _lastName;

    public:

    string& firstName(){
        return _firstName;
    }

    string& lastName(){
        return _lastName;
    }

   
};

int main(){

    clsStuden StudentOne;

    StudentOne.firstName() = "Ahmed";
    StudentOne.lastName() = "Osman";

    cout << "First Name: " << StudentOne.firstName() << endl;
    cout << "Last Name: " << StudentOne.lastName() << endl;

 
    return 0;
}