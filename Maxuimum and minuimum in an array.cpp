#include <iostream>
using namespace std;



int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive number of elements." << endl;
        return 0; 
    }

    int arr[n];

    
    cout << "Enter the elements of the array, separated by spaces:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int max = arr[0];
    int min = arr[0];


    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
}
    

   
