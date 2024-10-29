#include <iostream>

using namespace std;

class clsAdress{

    private:
    struct _usrAdress {
        string country;
        string city;
        string district;
        int streetNum;
        int buildingNum;
    };

    _usrAdress Adress;
    
    

    public:
    clsAdress(string country, string city, string district, int streetNum, int buildingNum){
        Adress.country = country;
        Adress.city = city;
        Adress.district = district;
        Adress.buildingNum = buildingNum;
        Adress.streetNum = streetNum;
    }

     void getAdressInfo(){
        cout << "Country: " << Adress.country << endl;
        cout << "City: " << Adress.city << endl;
        cout << "District: " << Adress.district << endl;
        cout << "Street No: " << Adress.streetNum << endl;
        cout << "Building No: " << Adress.buildingNum << endl;
    }
};

int main(){
    clsAdress Adress("Eritrea", "Adi-keyh", "Unabur", 2140, 320);
    Adress.getAdressInfo();
    return 0;
}