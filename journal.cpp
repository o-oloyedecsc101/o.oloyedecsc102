#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// Function to add an entry to the journal
void AddEntry(std::ofstream& journalFile) {
    std::string entry;
    std::cout << "Enter your journal entry (type 'end' to finish):\n";
    while (true) {
        std::string line;
        std::getline(std::cin, line);
        if (line == "end") {
            break;
        }
        entry += line + "\n";
    }
    journalFile << entry << "\n";
}

// Function to edit the wallpaper
void EditWallpaper(std::string& wallpaper) {
    std::cout << "Enter the new wallpaper image file name: ";
    std::cin >> wallpaper;
    std::cout << "Wallpaper updated.\n";
}

int main() {
    std::string journalFileName = "journal.txt";
    std::string wallpaper = "default.jpg";

    std::ofstream journalFile(journalFileName, std::ios::app);
    if (!journalFile) {
        std::cerr << "Failed to open the journal file.\n";
        return 1;
    }

    int choice;
    while (true) {
        std::cout << "Journal Menu:\n";
        std::cout << "1. Add Entry\n";
        std::cout << "2. Edit Wallpaper\n";
        std::cout << "3. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                AddEntry(journalFile);
                break;
            case 2:
                EditWallpaper(wallpaper);
                break;
            case 3:
                journalFile.close();
                std::cout << "Goodbye!\n";
                return 0;
            default:
                std::cout << "Invalid choice. Try again.\n";
                break;
        }
    }

    return 0;
}
