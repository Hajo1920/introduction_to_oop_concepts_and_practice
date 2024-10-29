#include <iostream>
#include <vector>

using namespace std;

class clsA{
    private:
    int _x;

    public:

    clsA(int x){
        _x = x;
    }

    void Print(){
        cout << "Vlaue of x: " << _x << endl;
    }


};
int main(){
    vector<clsA> A;

    short numOfObjects = 5;

    // way one
    //  for(short x = 1; x <= numOfObjects; x++){
    //     clsA temp(x);
    //     A.push_back(temp);
     
    // }

    // way two
    for(short x = 1; x <= numOfObjects; x++){
        
        // A.push_back(clsA(x)); // normal way
        A.emplace_back(clsA(x)); // efficient way

        A[x-1].Print();
     
    }
    return 0;
}