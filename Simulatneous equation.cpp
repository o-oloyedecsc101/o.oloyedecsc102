#include <iostream>
using namespace std;

int main() {
    double a1, b1, c1, a2, b2, c2;
    
	cout << "Enter coefficients for the first equation (a1 b1 c1): ";
    cin >> a1 >> b1 >> c1;

     cout << "Enter coefficients for the second equation (a2 b2 c2): ";
    cin >> a2 >> b2 >> c2;

    double abc = a1 * b2 - a2 * b1;

    if (abc == 0) {
        cout << "The system of equations has no unique solution." << endl;
    } else {
        // Calculate the values of x and y
        double x = (c1 * b2 - c2 * b1) / abc;
        double y = (a1 * c2 - a2 * c1) / abc;
        cout << "Solution: x = " << x << ", y = " << y << endl;
    }

    return 0;
}
