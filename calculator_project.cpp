/*
Small Calculator project using OOP
*/

#include <iostream>
using namespace std;
class clsCalculator {
   private:
   float _result = 0;
   short _activeCalculationCheck;
   float _previousValue;
   float _activeValue;
   enum _enClaclculation {ADD=1, SUB=2, DIVIDE=3, MULTI=4, CLEAR=5, PREVRESULT=6 };

   public:
   void ReturnToPreviousResult(){
     _activeCalculationCheck = _enClaclculation::PREVRESULT;
    _result = _previousValue;
   }

   void Clear(){
    _activeCalculationCheck = _enClaclculation::CLEAR;
    _previousValue = _result;
    _result = 0;
   }

   void Add(float input){
    _activeValue = input;
    _previousValue = _result;
    _activeCalculationCheck = _enClaclculation::ADD;
    _result+= _activeValue;

   }

   void Subtruct(float input){
    _activeValue = input;
    _previousValue = _result;
    _activeCalculationCheck = _enClaclculation::SUB;
    _result-= _activeValue;
   }

   void Divide(float input){
    _activeValue = input;
    _previousValue = _result;
    _activeCalculationCheck = _enClaclculation::DIVIDE;
    if(_activeValue == 0){
        _activeValue = 1;
    }

    _result/=_activeValue;

   }

   void Multiplay(float input){
    _activeValue = input;
    _previousValue = _result;
    _activeCalculationCheck = _enClaclculation::MULTI;
    _result*=_activeValue;
   }

   void PrintResult(){
    switch (_activeCalculationCheck)
    {
    case _enClaclculation::ADD:
        cout << "Result after Adding " << _activeValue << ": " << _result << endl;
        break;
    case _enClaclculation::SUB:
        cout << "Result after Subtracting " << _activeValue << ": " << _result << endl;
        break;

    case _enClaclculation::DIVIDE:
        cout << "Result after Dividing to " << _activeValue << ": " << _result << endl;
        break;

    case _enClaclculation::MULTI:
        cout << "Result after Multiplying by " << _activeValue << ": " << _result << endl;
        break;
    
     case _enClaclculation::CLEAR:
        cout << "Result after Clear "<< ": " << _result << endl;
        break;

    case _enClaclculation::PREVRESULT:
        cout << "Rverting to previous result "<< ": " << _result << endl;
        break;
    
    default:
       cout << "Current value of variable is: " << _result << endl;
        break;
    }
   }
};

int main(){

    clsCalculator Calculator;
    Calculator.PrintResult();
    Calculator.Add(100);
    Calculator.PrintResult();
    Calculator.Clear();
    Calculator.PrintResult();
    Calculator.Add(150);
    Calculator.PrintResult();
    Calculator.Subtruct(100);
    Calculator.PrintResult();
    Calculator.Divide(0);
    Calculator.PrintResult();
    Calculator.Multiplay(5);
    Calculator.PrintResult();
    Calculator.Add(250);
    Calculator.PrintResult();
    Calculator.Divide(5);
    Calculator.PrintResult();
    Calculator.Subtruct(90);
    Calculator.PrintResult();
    Calculator.Multiplay(10);
    Calculator.PrintResult();

    return 0;

}