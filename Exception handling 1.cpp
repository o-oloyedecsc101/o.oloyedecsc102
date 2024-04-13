#include <iostream>
using namespace std;

float num, ans, denom;

int main() {
    cout << "Handling Exceptions" << endl;
    cout << "Enter Numerator: ";
    cin >> num;
    cout << "Enter Denominator: ";
    cin >> denom;

    try {
        if (denom == 0)
            throw denom;
        else if (denom > num)
            throw "Denominator is greater than numerator";
        else {
            ans = num / denom;
            cout << "Result: " << ans << endl;
        }
    } catch (float e) {
        cout << "Error: The denominator is zero" << endl;
    } catch (const char *str) {
        cout << "Error: " << str << endl;
    }

    return 0;
}
