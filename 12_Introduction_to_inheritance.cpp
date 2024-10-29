#include <iostream>
using namespace std;


class clsPersonalInfo {

    private:
    string _firstName;
    string _lastName;
    short _age;
    short _height;

    public:
    void setFirstName(string firstName){
        _firstName = firstName;
    }
    void setLastName(string lastName){
        _lastName = lastName;
    }
    void setAge(short age){
        _age = age;
    }
    void setHeight(short height){
        _height = height;
    }

    string getFirstName(){
        return _firstName;
    }
    string getLastName(){
        return _lastName;
    }
    short getAge(){
        return _age;
    }
    short getHeight(){
        return _height;
    }
};

class clsPublicInfo : public clsPersonalInfo{ 
    // sub class clsPublicInfo now inheriting all public members of super class clsPersonalInfo 

    private:
    string _job;
    
    public:
    void setJob(string job){
        _job = job;
    }
    string getJob(){
        return _job;
    }
};

int main(){

    return 0;
}