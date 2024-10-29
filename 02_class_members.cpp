#include <iostream>

using namespace std;

class clsPerson{
    // There are two members in any class: 1. Data member and 2.Method member.

    string title = "Name: "; // Private  Data Member
    
    public:
    string firstName; // Public Data Member
    string lastName; // Public Data Member

    string FullName(){  // Member Methods (Functions or Procudures)
        
        return title + firstName + " " + lastName; 
    }
};

int main(){
    clsPerson Person1;
   

    Person1.firstName = "Ahmed";
    Person1.lastName = "Osman";
    

    cout << Person1.FullName() << endl;
    return 0;
}