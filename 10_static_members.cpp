#include<iostream>

using namespace std;

class clsWomen {

    public:
    static int Man;
    int child;

    clsWomen(){
        Man++;
    }

    void PrintFamily(){
        cout << "Childrens: " << child << endl;
        cout << "Husbund: " << Man << endl;
    }
};

int clsWomen::Man = 1;

int main(){

    clsWomen Husband, Women1, Women2,Women3, Women4;

    Women1.child = 2;
    Women2.child = 3;
    Women3.child = 6;
    Women4.child = 1;

    Husband.Man = 1;
    

    
    Women1.PrintFamily();
    Women2.PrintFamily();
    Women3.PrintFamily();
    Women4.PrintFamily();
    return 0;
}