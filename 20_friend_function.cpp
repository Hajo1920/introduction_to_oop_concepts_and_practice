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

    friend void PersonInfo(clsPerson person);
};

void PersonInfo(clsPerson person){
    cout << person.FullName() << endl;
    // After making function as friend.
    cout << "Disease: " << person._disease << endl;
    cout << "Weakness: " << person._weakness << endl;
}


int main(){
  
    clsPerson Person;
    PersonInfo(Person);
    return 0;
}