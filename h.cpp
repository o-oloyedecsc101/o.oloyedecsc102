#include <iostream>
using namespace std;

int main() {
    int totalMinutes;
    
    cout << "Enter the total number of minutes: ";
    cin >> totalMinutes;

    int hours = totalMinutes / 60;
    int minutes = totalMinutes % 60;

    cout << "Hours and Minutes: " << hours << ":" << minutes << endl;

    return 0;
}
