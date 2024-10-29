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

class clsDeveloper : public clsEmployee{

    private:
    string _mainProgrammingLanguage;

    public:
    clsDeveloper(int ID, string firstName, string lastName, string email, string phone, string title, string department, short salary, string mainProgrammingLanguage):
    clsEmployee(ID, firstName, lastName, email, phone, title,  department,  salary)
    {
        _mainProgrammingLanguage = mainProgrammingLanguage;
    }

    void setMainProgrammingLanguage(string lang){
        _mainProgrammingLanguage = lang;
    }

    string getMainProgrammingLanguage(){
        return _mainProgrammingLanguage;
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
        cout << "Title: " << getTitle() << endl;
        cout << "Department: " << getDepartment() << endl;
        cout << "Main Programming Languages: " << _mainProgrammingLanguage << endl;
        cout << "Salary: " << getSalary() << endl;
        cout << "\n___________________________________________\n";
    }
};

int main(){
    clsDeveloper Developer(20, "Ahmed", "Osman", "me@programmingAdvices.com", "098858522", "Software Architect", "AI engineering", 25000 , "C++, C#, Python, JavaScript, Rust");

    Developer.PrintInfo();

    Developer.sendEmail("Job Application accpeted", "We will contact you as soon as possible.");
    Developer.sendSMS("Mr, " + Developer.getFirstName() + " your interview time have been scheduled please be tuned.");
    return 0;
}
