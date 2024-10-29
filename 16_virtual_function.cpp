#include <iostream>

using namespace std;

class clsSuper{

    public:
   virtual void printInfo(){ // virtual memory table will be created and the pointer will print each subclass members separetly.
        cout << "I am super" << endl;
    }
};

class clsSupclass : public clsSuper{

    public:
     void printInfo () {
        cout << "I am sub class" << endl;
    }
};

class clsSubclassTwo: public clsSuper{

    public:
    void printInfo(){
        cout << "I am subclass Two" << endl;
    }
};

int main(){

    clsSupclass Sub;
    clsSubclassTwo SubTwo;

// we call this early or static binding becouse the descision is already made and confirmed at compile time
    Sub.printInfo();
    SubTwo.printInfo();

    clsSuper* sup = &Sub;
    clsSuper* sup_2 = &SubTwo;


// we call this Late or Daynamic binding because of selection of correct method decision happens at run time
    sup->printInfo();
    sup_2->printInfo();
    return 0;
}