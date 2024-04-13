#include <iostream>
using namespace std;

void passPointer(int *p){
	cout << "in the function" << endl;
	cout << "*p =" << *p << endl;
	cout << "p =" << p << endl;
}

int main (){
int main = 9;
passPointer ( &main );
return 0;
}
