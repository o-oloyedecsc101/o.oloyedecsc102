#include <iostream>
using namespace std;

int main(){
	double n, hours , minutes;
	
	cout << "Enter the hours(n)";
	cin >> n;
	
	//Calculate hours 
	hours = n/60;
	minutes = n * 60;
	cout << "Answer :" << hours << " : " << minutes;
	
	return 0;
}