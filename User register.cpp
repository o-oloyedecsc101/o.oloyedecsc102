#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int choice;
    cout << "Select a choice!\n1: Register\n2: Login\nYour choice: ";
    cin >> choice;

    if (choice == 1) {
        string username, password;
        cout << "Select username: ";
        cin >> username;

        cout << "Select password: ";
        cin >> password;

        ofstream file;
        file.open(username + ".txt");
        file << username << endl << password;
        file.close();

        cout << "Registration successful!\n";

        // Uncomment the line below if you want to go back to the main menu after registration
        // main();
    } else if (choice == 2) {
        string username, password, inputUsername, inputPassword;

        cout << "Enter username: ";
        cin >> inputUsername;

        cout << "Enter password: ";
        cin >> inputPassword;

        ifstream file(inputUsername + ".txt");

        // Check if the file exists and can be opened
        if (file) {
            // Read the stored username and password from the file
            file >> username >> password;

            // Check if the entered username and password match the stored values
            if (username == inputUsername && password == inputPassword) {
                cout << "Login successful!\n";
            } else {
                cout << "Invalid username or password!\n";
            }
        } else {
            cout << "User not found!\n";
        }

        file.close();
    }

    return 0;
}
