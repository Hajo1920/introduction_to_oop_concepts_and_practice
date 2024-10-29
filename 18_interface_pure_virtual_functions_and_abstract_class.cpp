#include <iostream>

using namespace std;

class clsAbstractClass {
    virtual void Dial(int nums) = 0;
    virtual void SendSms(int num, string text) = 0;
    virtual void AddPhoto() = 0;

};

class clsApple : public clsAbstractClass{
    // abstract class is an interface/contract to impliment all members of the class in any class inherits it.
    public:
    void Dial(int sms){

    }
    void SendSms(int num, string text){

    }
    void AddPhoto(){

    }
};

int main(){
    clsApple Iphone;
    Iphone.AddPhoto();
    Iphone.Dial(10);
    Iphone.SendSms(10, "Hii how are you");
    return 0;
}