#include <iostream>

using namespace std;

class clsSuperClass {
    private:
    string _code;
    string _message;

    public:
    clsSuperClass(string code, string msg){
        _code = code;
        _message = msg;
    }

    void setCode(string code){
        _code = code;
    }
    void setMessage(string msg){
        _message = msg;
    }

    string getCode(){
        return _code;
    }
    string getMessage(){
        return _message;
    }
};

class clsSubSuperClass : public clsSuperClass {

    private:
    string _name;

    public:
    clsSubSuperClass(string code, string msg, string name): clsSuperClass(code, msg){
        _name = name;
    }

    void setName(string name){
        _name = name;
    }
    string getName(){
        return _name;
    }
};

class clsMultiSubClass : public clsSubSuperClass{
    private:
    int _ID;

    public:
    clsMultiSubClass(string code, string msg, string name, int ID): clsSubSuperClass(code, msg, name){
        _ID = ID;
    }

    int getId(){
        return _ID;
    }
};

int main(){
    clsMultiSubClass MultiSubClass("A011", "This is inheritance", "Ahmed Osman", 10);

    cout << "Name: " << MultiSubClass.getName() << endl;
    cout << "ID: " << MultiSubClass.getId() << endl;
    cout << "Code: " << MultiSubClass.getCode() << endl;
    cout << "Message: " << MultiSubClass.getMessage() << endl;
    return 0;
}