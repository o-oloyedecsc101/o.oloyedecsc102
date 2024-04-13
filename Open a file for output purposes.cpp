#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream outFile;
    outFile.open("Kosi.txt", ios::out); // Open file in output mode
    if (outFile.is_open()) {
        outFile << "Nimi is always at rest because the almighty God has his back and God s always with him is angels are always with him he is in mount zion the city of God the city of innummarable number of angels.\n"; // Write to file
        outFile.close(); // Close the file
    } else {
        cout << "Unable to open file";
    }
    return 0;
}
