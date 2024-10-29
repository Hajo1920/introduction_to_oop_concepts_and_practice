#include <iostream>

using namespace std;

class clsAdress{

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

    // Manually copying constructor

    clsAdress(clsAdress& old_obj){
        _address = old_obj._address;
        _biuldingNum = old_obj._biuldingNum;
        _country = old_obj._country;
        _city = old_obj._city;
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

    clsAdress Address2 = Address1; // copying initial member values of Address1 object to Address2 object
    Address2.PrintAddress();
    // While the compiler will automatticaly can fill Object member values but even you can do it manually.
    return 0;
}