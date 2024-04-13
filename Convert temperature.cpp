#include <iostream>
using namespace std;

int main(){
	double k;
	
	cout << "Enter the Temperature(k)";
	cin >> k;
	
	double F = k - 273.15*9/5 + 32;
	cout << "Answer:" << F;
	
	return 0;
	
}