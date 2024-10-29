#include <iostream>

using namespace std;

class clsPerson{

    private:
    string _disease;
    string _weakness;
    string _firstName;
    string _lastName;
    
    public:
    clsPerson(){
          _disease = "Amonia";
          _weakness = "poor social interaction";
    }
    string FullName(){
        
        return "Full Name: " + _firstName + " " + _lastName;
    }

    friend class clsFriend; // Friendship contract made >
};

class clsFriend : public clsPerson{

    public:

    void display(clsPerson person){
        cout << person.FullName() << endl;
        // After friend class contract we can access all private members of super class;
        cout << "Disease: " << person._disease << endl;
        cout << "Weakness: " << person._weakness << endl;

    }
};

int main(){
    clsFriend Friend;
    clsPerson Person;
    Friend.display(Person);

    return 0;
}