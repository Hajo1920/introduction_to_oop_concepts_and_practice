#include <iostream>
#include <vector>

using namespace std;

class clsA{
    private:
    int _x;

    public:

    clsA(){

    }
    clsA(int x){
        _x = x;
    }

    void Print(){
        cout << "Vlaue of x: " << _x << endl;
    }


};

int main(){
    int numOfObjects = 6;

    clsA* arrA = new clsA[numOfObjects];

    for(int x = 1; x <= numOfObjects; x++){
        arrA[x-1] = clsA(x);
    }

    for (int x = 0; x < numOfObjects; x++){
        arrA[x].Print();
    }
    return 0;

    delete[] arrA;
}