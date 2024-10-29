#include <iostream>

using namespace std;

class clsAdress{
    // By default every class have a constructor that is called when class member is called by class object.
    // a constructor is a function that have the same name as the class
    // one usage of constructor is to prevent having or compiling empty object

    private:
    string _address;
    string _biuldingNum;
    string _country;
    string _city;

    public:

    clsAdress(string address, string buildingNum, string country, string city) { // this  is  constructor
    _address = address;
    _biuldingNum = buildingNum;
    _country = country;
    _city = city;
    }

    void setAddress(string address){
        _address = address;
    }

    void setBuildingNumber(string buildingNum){
        _biuldingNum = buildingNum;
    }

    void setCountry(string country){
        _country = country;
    }

    void setCity(string city){
        _city = city;
    }

    void PrintAddress(){
        cout << "Adress detail: " << endl;
        cout << "Address: " << _address << endl;
        cout << "Building Number: " << _biuldingNum << endl;
        cout << "City: " << _city << endl;
        cout << "Country: " << _country << endl;
    }

    string getAddress(){
        return _address;
    }

    string getBuildingNumber(){
        return _biuldingNum;
    }

    string getCountry(){
        return _country;
    }

    string getCity(){
        return _city;
    }

};

int main(){
    clsAdress Address1("Abu Nakhla zone", "214", "Qatar", "Al-Rayyan");
    Address1.PrintAddress();
    return 0;
}