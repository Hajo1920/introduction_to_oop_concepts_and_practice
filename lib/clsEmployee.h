#pragma once
#include <iostream>
#include "clsPerson.h"


using namespace std;


class clsEmployee : public clsPerson {
    private:

    string _title;
    string _department;
    short _salary;

    public:

    clsEmployee(int ID, string firstName, string lastName, string email, string phone, string title, string departement, short salary):
    clsPerson(ID, firstName, lastName, email,  phone)
    {
        _title = title;
        _department = departement;
        _salary = salary;
    
    }


    void setTitle(string title){
        _title = title;
    }

    void setSalary(short salary){
        _salary =  salary;
    }

    void setDepartment(string department){
        _department  = department;
    }

    string getTitle(){
        return _title;
    }

    short getSalary(){
        return _salary;
    }

    string getDepartment(){
        return _department;
    }

    void PrintInfo(){
            cout << "Info: " << endl;
        cout << "\n___________________________________________\n";
        cout << "ID: " << getID() << endl;
        cout << "First Name: " << getFirstName() << endl;
        cout << "Last Name: " << getLastName() << endl;
        cout << "Full Name: " << getFirstName() << " " << getLastName() << endl;
        cout << "Email: " << getEmail() << endl;
        cout << "Phone: " << getPhoneNum() << endl;
        cout << "Title: " << _title << endl;
        cout << "Department: " << _department << endl;
        cout << "Salary: " << _salary << endl;
        cout << "\n___________________________________________\n";
    }
};
