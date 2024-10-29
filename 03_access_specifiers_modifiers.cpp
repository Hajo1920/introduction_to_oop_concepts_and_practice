#include <iostream>

using namespace std;

class clsPerson{

    private:  // Accessible to every member of the class only.
              // As its name Private for access out side of the class or through inheriting this class
    string title = "Name: "; // Private

    float heightInMeter(){

        return 1.70;
    }

    protected: // Accessible to every member of the class and any class inherits this classs
               // Private for access of outside of the class through declaring objects for the class
    string country  = "Eritrea";

    string Job(){

        return "Software Enginner";
    }
    
    public: // Accessible from every place either through inheriting the class or defining objects for this class.
    string firstName;
    string lastName;

    string FullName(){
        
        return title + firstName + " " + lastName;
    }

    void AllInformation(){
        cout << FullName() << endl;
        cout << "Height: " << heightInMeter() << endl;
        cout << "Job: " << Job() << endl;
        cout << "Country: " << country << endl;
    }
};

int main(){
    clsPerson Person1;
   

    Person1.firstName = "Ahmed";
    Person1.lastName = "Osman";

    Person1.AllInformation();
    return 0;
}