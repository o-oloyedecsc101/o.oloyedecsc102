#include <iostream>
using namespace std;

int main() {
    int num = 10;

    cout << "Original number: " << num << endl;

    // Using various assignment operators
    num += 5;  // equivalent to num = num + 5
    cout << "After addition: " << num << endl;

    num -= 3;  // equivalent to num = num - 3
    cout << "After subtraction: " << num << endl;

    num *= 2;  // equivalent to num = num * 2
    cout << "After multiplication: " << num << endl;

    num /= 4;  // equivalent to num = num / 4
    cout << "After division: " << num << endl;

    return 0;
}
