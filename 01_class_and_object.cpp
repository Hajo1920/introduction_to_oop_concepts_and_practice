#include <iostream>

using namespace std;

class clsPerson{

    string title; // Private
    
    public:
    string firstName;
    string lastName;

    string FullName(){
        
        return title + firstName + " " + lastName;
    }

    clsPerson(string title){
        this->title = title;
    }
};

int main(){
    clsPerson Person1("Name: ");
   

    Person1.firstName = "Ahmed";
    Person1.lastName = "Osman";
    

    cout << Person1.FullName() << endl;
    return 0;
}