#include <iostream>

// Enumeration with explicitly assigned values
enum Status {
    OK = 0,
    Error = -1,
    InProgress = 1
};

int main() {
    // Using enum values
    Status myStatus = -1;

    // Check the enum value
    if (myStatus == OK) {
        std::cout << "Operation successful." << std::endl;
    } else if (myStatus == Error) {
        std::cout << "Error occurred." << std::endl;
    } else if (myStatus == InProgress) {
        std::cout << "Operation in progress." << std::endl;
    }

    return 0;
}

