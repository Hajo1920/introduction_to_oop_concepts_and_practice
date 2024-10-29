#include <iostream>

using namespace std;

class clsClass {


    public:

    int IamLocal(){
        return 100;
    }

    static int IamStaticAndGlobal(){
        return 1000;
    }
};

int main(){

    clsClass Class1, Class2, Class3;

    cout << clsClass::IamStaticAndGlobal() << endl; // through class level
    cout << Class1.IamStaticAndGlobal() << endl; // through object level
    cout << Class2.IamLocal() << endl; // only throught  object
    return 0;
}