#include <iostream>
#include "./lib/string_prop.h"

using namespace std;

int main(){
    clsString String("Ahmed Osman");


    cout << String.ConvertFirstLettersToUpper() << endl;

    cout << clsString::ConvertFirstLettersToUpper("mohammed ali osman mohammed") << endl;
    cout << clsString::ConvertFirstLetterToLower("Mohammed Ahmed Mohammed") << endl;
    cout << clsString::ConvertAllLettersToUpper("ahmed osman ahmed mohammed") << endl;
    cout << clsString::ConvertAllLettersToLower("MESSAGE FROM PROGRAMMING ADVICES") << endl;
    cout << clsString::InvertLetters("When SOMEone Dreaming for Success") << endl;
    cout << clsString::CharCountInString("Ahmed Osman Ahmed Moammed", 'm', false) << endl; //true=5 false=6
    cout << clsString::VowelCount("Every programmer should practice every day") << endl;

    String.PrintEachWordInString("C++ is the most robust programming language in the worled");

    cout << clsString::CountWordsInString("Encapsulation Abstraction Polymorphism") << endl;

    cout << clsString::TrimLeft("           Hello Worled             ") << endl;
    cout << clsString::TrimRight("           Hello Worled             ") << endl;
    cout << clsString::Trim("           Hello Worled             ") << endl;

    cout << clsString::ReverseWord("Ahmed Osman") << endl;

    cout << clsString::ReplaceWord("Civil Enginnering is the best carrier", "Computer","civil", false) << endl;

    cout << clsString::RemoveSpecialChar("'never' tru$st any one, until you reach your* Goal !") << endl;
    return 0;
}