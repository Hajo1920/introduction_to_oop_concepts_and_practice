#include <iostream>

using namespace std;
class clsSuper{

    public:
    string name = "I am super class";
};

class clsDerived : public clsSuper {
  
};
int main(){
    clsSuper super;
    clsDerived derived;
    // up-casting is when base class object points to subclass and will work fine
    clsSuper * spr = &derived;

    // clsDerived * drv = &super; this is downcasting which will not work becouse

   cout << spr->name << endl;
 

    return 0;
}