#include<iostream>
#include<vector>

using namespace std;

class clsA
{
public:

	clsA(int value)
	{
		x = value;
	}

	int x;

	void Print()
	{
		cout << "The value of x=" << x <<endl;
	}

};


int main(){
clsA obj[] = {clsA(10), clsA(20), clsA(30), clsA(40)};

for(int x = 0; x < size(obj); x++){
	obj[x].Print();
}

}