#include <iostream>

using namespace std;

class clsPerson{

    class clsGeneralInfo {

        private:
        string _firstName;
        string _secondName;
        string _email;
        string _job;
        string _country;

        public:
     
         clsGeneralInfo(string firstName, string secondName, string email, string country, string job){

         _firstName = firstName;
         _secondName = secondName;
         _email = email;
         _country =country;
         _job = job;

    }

    void PrintInfo(){
        cout << "Full Name: " << _firstName + " " << _secondName  << endl;
        cout << "Email: " << _email << endl;
        cout << "Country: " << _country << endl;
        cout << "Job: " << _job << endl;
    }


    };


    public:

    clsGeneralInfo Info = clsGeneralInfo("", "", "", "","");
    
    clsPerson(string firstName, string secondName, string email, string country, string job){
        Info = clsGeneralInfo(firstName, secondName, email, country,job);
    };
  
    
    
};


int main(){
    clsPerson Person("Ahmed", "Osman", "me@code.com", "Eritrea", "Programmer");
    Person.Info.PrintInfo();
    return 0;
}