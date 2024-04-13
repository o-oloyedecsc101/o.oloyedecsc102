#include <iostream>
using namespace std;
int main(){
	int f = 3;
	int a = 5;
	int c;
	int z;
	c = a++;
	cout << "c = a++ :" << c << endl;
	
	a = 5;
	c = ++a;
	cout << "c = ++a :" << c << endl; 
	
	a = 5;
	c = a--;
	cout << "c = a-- :" << c << endl;
	
	a = 5;
	c = --a;
	cout << "c = --a :" << c << endl;
	
     f = 3;
    z =	f++ + 4;
	cout << "z = " << z << endl;
	return 0;
	
}
