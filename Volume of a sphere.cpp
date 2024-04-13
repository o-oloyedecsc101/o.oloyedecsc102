#include <iostream>
using namespace std;

int main(){
	double pi = 3.142;
	double r;
	double p = 1.3333;
	
	//input values
	cout << "Enter value of the equation(r)";
	cin >> r;
	
	// CALCULATE THE FIGURE
	double V = p * pi * r * r * r;
	cout << "answer: " << V;
	
	return 0;
}