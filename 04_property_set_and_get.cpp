#include <iostream>

using namespace std;

class clsStuden {

    private:
    string _firstName;
    string _lastName;

    public:
    void setFirstName(string firstName){
        _firstName = firstName;
    }

    string getFirstName(){
        return _firstName;
    }

    void setLastName(string lastName){

        _lastName = lastName;
    }

    string getLastName(){

        return _lastName;
    }

    string getFullName(){
        return _firstName + " " + _lastName;
    }
};

int main(){

    clsStuden StudentOne;

    StudentOne.setFirstName("Ahmed");
    StudentOne.setLastName("Osman");

    cout << "First Name: " << StudentOne.getFirstName() << endl;
    cout << "Last Name: " << StudentOne.getLastName() << endl;

    cout << "Full Name: " << StudentOne.getFullName() << endl;
    return 0;
}