#include "./lib/clsEmployee.h"
using namespace std;


int main(){
    clsEmployee Employee(20, "Ahmed", "Osman", "me@programmingAdvices.com", "098858522", "Software Architect", "AI engineering", 25000 );

    Employee.PrintInfo();

    Employee.sendEmail("Welcome to our job qualification program", "We will contact you as soon as possible.");
    Employee.sendSMS("You have been applied successfuly");
    return 0;
}
