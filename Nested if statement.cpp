#include <iostream>
using namespace std;


int main (){
	int a,b;
	cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;
	
	if (a ==40) {
		
		if (b < 12)
		    cout << "a is equal to 40 and b is less than 12" << endl;
		else 
		    cout << "a is equal to 40 and b is greater than 12" << endl;
		    
	}
	else {
		cout << "a is not equal to 40" <<endl;
	}
	return 0;
}
