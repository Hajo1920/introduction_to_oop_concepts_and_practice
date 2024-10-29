#pragma once
#include <iostream>
using namespace std;

class clsPerson {
    private:
    int _ID;
    string _firstName;
    string _lastName;
    string _email;
    string _phone;

    public:

    clsPerson(int ID, string firstName, string lastName, string email, string phone){
        _ID = ID;
        _firstName = firstName;
        _lastName = lastName;
        _email = email;
        _phone = phone;
    }

    int getID(){
        return _ID;
    }

    void setFirstName(string firstName){
        _firstName = firstName;
    }

    void setLastName(string lastName){
        _lastName = lastName;
    }

    void setEmail(string email){
        _email = email;
    }

    void setPhoneNum(string phone){
        _phone = phone;
    }

    string getFirstName(){
        return _firstName;
    }

    string getLastName(){
        return _lastName;
    }

    string getEmail(){
        return _email;
    }

    string getPhoneNum(){
        return _phone;
    }

    string getFullName(){
        return _firstName + " " + _lastName;
    }

    void PrintInfo(){
        cout << "Info: " << endl;
        cout << "\n___________________________________________\n";
        cout << "ID: " << _ID << endl;
        cout << "First Name: " << _firstName << endl;
        cout << "Last Name: " << _lastName << endl;
        cout << "Full Name: " << _firstName << " " << _lastName << endl;
        cout << "Email: " << _email << endl;
        cout << "Phone: " << _phone << endl;
        cout << "\n___________________________________________\n";
    }

        void sendEmail(string subject, string body){
        cout << "The following mail sent successfuly to email: " << _email << endl;
        cout << "Subject: "<< subject << endl;
        cout << "Body: "<< body << endl;
    }

    void sendSMS(string sms){
        cout << "The following SMS sent successfuly to phone: " << _phone << endl;
        cout << sms << endl;
    }
    };