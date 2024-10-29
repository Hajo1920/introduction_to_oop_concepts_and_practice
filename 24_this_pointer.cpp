#include <iostream>

using namespace std;

class clsInfo{
    private:
    string _name;
    string _job;

    // 'this' keyword is a pointer refering to current object members 
     
    // it is is used implicitly by the compiler if you didn't write it.

    // static functions are not allowed to use 'this' becouse they can be called from the class level beside from object call

    // friend classes or functions also can't use "this" pointer as long as they are not class members.

    public:

    static void myInfoStatic(clsInfo Info){
        Info.PrintInfo();
    }

    void myInfo(){
        myInfoStatic(*this); // *this pointer to the class object
    }

    clsInfo(string name, string job){
        this->_name = name;
        this->_job = job;
    }

    void PrintInfo(){
        cout << "Name: " << this->_name << endl;
        cout << "Job: " << this->_job << endl;
    }

};

int main(){
    clsInfo Info("Ahmed Osman", "Software Enginner");
    Info.PrintInfo();
    Info.myInfo();
    return 0;
}