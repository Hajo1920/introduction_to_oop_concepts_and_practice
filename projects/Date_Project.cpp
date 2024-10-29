#include <iostream>
#include "./lib/date_prop.h"

using namespace std;

int main()

{
    clsDate Date1;
    Date1.Print();

    clsDate Date2("31/1/2022");
    Date2.Print();

    clsDate Date3(20, 12, 2022);
    Date3.Print();

    clsDate Date4(366,2022);
    Date4.Print();

    Date1.IncreaseDateByOneMonth();
    Date1.Print();

    Date3.PrintYearCalendar();
    
    if(Date2.IsValidDate()){
        cout << "Date is valid" << endl;
        
    }else cout << "Date is unvalid" << endl;
    
   cout << "My Age InDays is: " <<
        clsDate::CalculateMyAgeInDays(  clsDate(19, 12, 1998) )  << " Days" << endl;

        

    return 0;

}