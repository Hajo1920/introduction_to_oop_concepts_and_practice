#include <iostream>

using namespace std;

class clsPerson{

    private:
    int _ID;
    
    public:
    clsPerson(){
        _ID = 10;
    }

    void byVal(clsPerson person){
        // passing by value will not reflect any changes to the original value of the class member
        person._ID = 100;
    }
   
   void byRef(clsPerson &person){
    // passing by ref will change the value of the memeber in the class globaly.
    person._ID = 1000;
   }

   int getID(){
    return _ID;
   }
    
};



int main(){
  
    clsPerson Person;
    Person.byVal(Person);
    cout << Person.getID() << endl; // 10 old value

    Person.byRef(Person);
    cout << Person.getID() << endl; // 1000 new value
    return 0;
}