#include <iostream>

using namespace std;

/*
Polymorphism meaning is simply "Poly" -> Many and "Morphism" -> Forms  which is [Many Forms]

we have 4 types of polymorphisms
1. Function overloading
2. Operator overloading
3. Function overriding
4. Virtual function
*/

// 1. function overloading
int Sum(int num1, int num2){
    return num1 + num2;
}

int Sum(int num1, int num2, int num3){
    return num1+num2+num3;
}

// 2.operator overloading;

int num = 10 + 10;

string str = "one";
string str2 = str + "two";

// 3.function overriding

class clsSuper {
    public:
    void Print(){
        cout << "This is for Super class" << endl;
    }
};

class clsSub : public clsSuper{
    public:
    void Print(){
      cout <<  "this is for Sub class" << endl;
    }
};


class clsVirtualSuper {

    public:
    virtual void Func(){
        cout << "This is from Virtual super class" << endl;
    }
};

class clsVirtualSub: public clsVirtualSuper{
    public:
    void Func(){
        cout << "This is from Virtual sub class" << endl;
    }
};

int main(){

    // 4. Virtual function
    clsVirtualSub Sub;

    clsVirtualSuper * super = &Sub;

    super->Func();

    return 0;
}