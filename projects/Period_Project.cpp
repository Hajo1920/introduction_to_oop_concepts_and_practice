#include <iostream>
#include "./lib/period_prop.h"
#include "lib/date_prop.h"

int main()

{

    clsPeriod Period1(clsDate(1, 1, 2022), clsDate(10, 1, 2022));
    Period1.Print();

    cout << "\n";

    clsPeriod Period2(clsDate(3, 1, 2022), clsDate(5, 1, 2022));
    Period2.Print();


    //You can check like this
    cout << Period1.IsOverLapWith(Period2) <<endl;


    //Also you can call the static method and send period 1 and period 2
    cout << clsPeriod::IsOverlapPeriods(Period1, Period2) << endl;

    clsPeriod period(clsDate(1,1,2000), clsDate(5,1,2000));

    cout << clsPeriod::isDateInBetweenPeriod(period, clsDate(6,1,2000)) << endl;


    return 0;
}