#include<iostream>

using namespace std;
class clsA {
    private:
    char _code;

    public:
    int funcA(){
        return 1;
    }
};

class clsB : public clsA{
// clsA public members are accessible from inside the class or from object

 public:
string getText(){
    return  "String from class B";
}

};


class clsC : protected clsB{

    // clsB public and protected members are accessible from inside the class but using object not accessible
   public:
  
   void func(){
    clsB::funcA();
   }
};

class clsD : private clsC{
    // there will not be any inherited members

    public:
    void funcD(){
    
    }
};


int main(){
    clsB B;
    B.funcA();
    clsC C;
    //C.nothing
    
    clsD D;
    //D.nothing
    
    
    return 0;
}