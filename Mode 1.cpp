#include <fstream> // Include the file stream library, which contains methods for file handling
#include <iostream> // Include the input-output stream library, which contains methods for console input and output

int main() { // The main function where the program starts
    std::ifstream inFile; // Declare an input file stream variable
    inFile.open("Kosi.txt", std::ios::in); // Open the file 'example.txt' in input mode

    // Check if the file was successfully opened
    if (inFile.is_open()) { // If the file is open...
        std::string line; // Declare a string variable to hold each line from the file

        // Use a while loop to get each line from the file until there are no more lines
        while (getline(inFile, line)) { 
            std::cout << line << '\n'; // Output the line to the console
        }

        inFile.close(); // Close the file
    } else { // If the file could not be opened...
        std::cout << "Unable to open file"; // Output an error message
    }

    return 0; // Return 0 to indicate that the program has run successfully
}
