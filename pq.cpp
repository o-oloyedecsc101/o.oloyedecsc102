#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 5;
    cout << "a & b = " << (a & b) << endl; // Output: 4
    cout << "a | b = " << (a | b) << endl; // Output: 7
    cout << "a ^ b = " << (a ^ b) << endl; // Output: 3
    cout<<"~b = "<<(~b)<<endl; // Output: -7
    cout<<"b >> 1 = "<<(b>>1)<<endl; // Output: 3

return 0;
}

