#pragma once
#include "date_prop.h"

class clsPeriod{

private:
enum _enCompare  {Before=-1, Equal=0, After=1};

public:

    clsDate StartDate;
    clsDate EndDate;

    clsPeriod(clsDate StartDate, clsDate DateTo)
    {
        this->StartDate = StartDate;
        this->EndDate = DateTo;

    }

    static bool IsOverlapPeriods(clsPeriod Period1, clsPeriod Period2)
    {

        if (
            clsDate::GetDifferenceInDays(Period2.EndDate, Period1.StartDate) == _enCompare::Before
            ||
            clsDate::GetDifferenceInDays(Period2.StartDate, Period1.EndDate) == _enCompare::After
            )
            return false;
        else
            return true;

    }


    bool IsOverLapWith(clsPeriod Period2)
    {
        return IsOverlapPeriods(*this, Period2);
    }

static bool isDateOneBeforeDatetwo(clsDate DayOne,clsDate DayTwo){
  return DayOne.getYear() < DayTwo.getYear() ? true : (DayOne.getYear() == DayTwo.getYear() ? (DayOne.getMonth() < DayTwo.getMonth() ? true: (DayOne.getMonth() == DayTwo.getMonth() ? (DayOne.getDate() < DayTwo.getDate()) : false)):false);
}

static bool isDateOneEqualsDatetwo(clsDate DayOne,clsDate DayTwo){

  return DayOne.getYear() == DayTwo.getYear()  ? DayOne.getMonth() == DayTwo.getMonth() ? DayOne.getMonth() == DayTwo.getMonth() : false : false;
}

static bool isDateOneAfterDatetwo(clsDate DayOne,clsDate DayTwo){

  return (!isDateOneBeforeDatetwo(DayOne,DayTwo)) && isDateOneEqualsDatetwo(DayOne, DayTwo);
}


static bool isDateInBetweenPeriod(clsPeriod period,clsDate Day){
    return isDateOneBeforeDatetwo(period.StartDate, Day) && isDateOneAfterDatetwo(period.EndDate, Day);
}

    void Print()
    {
        cout << "Period Start: ";
        StartDate.Print();


        cout << "Period End: ";
        EndDate.Print();


    }

};
