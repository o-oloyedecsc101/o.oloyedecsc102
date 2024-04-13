#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

struct Student {
    string name;
    double testScore;
    double examScore;
    double participationMark;
    double totalScore;

    void calculateTotalScore() {
        totalScore = testScore + examScore + participationMark;
    }
};

vector<Student> readStudentRecords(const string& filename) {
    vector<Student> students;
    ifstream inputFile(filename);

    if (!inputFile) {
        cerr << "Error opening file " << filename << endl;
        exit(EXIT_FAILURE);
    }

    string line;
    getline(inputFile, line);
    while (getline(inputFile, line)) {
        stringstream ss(line);
        Student student;
        char comma;

        getline(ss, student.name, ',');
        ss >> comma >> student.testScore >> comma >> student.examScore >> comma >> student.participationMark;
        student.calculateTotalScore();
        students.push_back(student);
    }

    inputFile.close();
    return students;
}

bool doesNameExist(const string& studentName) {
    const string FILENAME = "results.csv";
    const char DELIMITER = ',';
    ifstream inputFile(FILENAME);

    if (!inputFile) {
        cerr << "Error opening file " << FILENAME << endl;
        exit(EXIT_FAILURE);
    }

    string line;
    while (getline(inputFile, line)) {
        stringstream ss(line);
        string name;

        if (getline(ss, name, DELIMITER)) {
            if (name == studentName) {
                inputFile.close();
                return true;
            }
        }
    }
    inputFile.close();
    return false;
}

bool validInput(int opt) {
    return opt >= 1 && opt <= 4;
}

void displayStudent(const Student& student) {
    cout << "Name: " << student.name << ", Test Score: " << student.testScore
         << ", Exam Score: " << student.examScore << ", Participation Mark: " << student.participationMark
         << ", Total Score: " << student.totalScore << endl;
}

void searchAndSaveStudent(const string& searchName, const string& inputFile, const string& outputFile) {
    ifstream inFile(inputFile);
    ofstream outFile(outputFile);

    if (!inFile.is_open() || !outFile.is_open()) {
        cerr << "Error opening files.\n";
        exit(EXIT_FAILURE);
    }

    string line;
    bool found = false;

    getline(inFile, line);

    while (getline(inFile, line)) {
        stringstream ss(line);
        Student student;
        char comma;

        getline(ss, student.name, ',');
        ss >> comma >> student.testScore >> comma >> student.examScore >> comma >> student.participationMark;

        if (student.name == searchName) {
            outFile << student.name << "," << student.testScore << "," << student.examScore << ","
                    << student.participationMark << "," << student.totalScore << "\n";
            found = true;
            break;
        }
    }

    inFile.close();
    outFile.close();

    if (found) {
        cout << "Student found and record saved successfully.\n";
    } else {
        cout << "Student not found.\n";
    }
}

int saveResult() {
    string searchName, inputFileName, outputFileName;

    cout << "Enter the name of the student you want to search: ";
    getline(cin, searchName);

    cout << "Enter the input file name: ";
    getline(cin, inputFileName);

    cout << "Enter the output file name: ";
    getline(cin, outputFileName);

    searchAndSaveStudent(searchName, inputFileName, outputFileName);

    return 0;
}

int searchStudent(const vector<Student>& students, const string& nameToSearch) {
    for (size_t i = 0; i < students.size(); ++i) {
        if (students[i].name == nameToSearch) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

int updateRecord(vector<Student>& students) {
    string searchName;
    cout << "Enter the name of the student you want to update: ";
    cin.ignore();
    getline(cin, searchName);

    int index = searchStudent(students, searchName);

    if (index != -1) {
        cout << "Found student record:\n";
        displayStudent(students[index]);

        cout << "Enter new test score: ";
        cin >> students[index].testScore;

        cout << "Enter new exam score: ";
        cin >> students[index].examScore;

        cout << "Enter new participation mark: ";
        cin >> students[index].participationMark;

        students[index].calculateTotalScore();

        cout << "Record updated successfully.\n";
    } else {
        cout << "Student not found.\n";
    }
}

void viewResults(const string& FILENAME) {
    ifstream file(FILENAME);

    if (!file.is_open()) {
        cout << "Unable to open file for reading.\n";
        return;
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}

int displayMenu() {
    const string FILENAME = "results.csv";
    vector<Student> students = readStudentRecords(FILENAME);
    int opt;
    do {
        cout << "What would you like to do? \n"
             << "1. View Record\n"
             << "2. Update a record\n"
             << "3. Store a Record\n"
             << "Enter your choice: ";
        cin >> opt;

        if (validInput(opt)) {
            cout << "Valid input!" << endl;

            if (opt == 1) {
                for (auto& student : students)
                    displayStudent(student);
            } else if (opt == 2) {
                updateRecord(students);
            } else if (opt == 3) {
                saveResult();
                cout << "Records saved. Exiting...\n";
            }
        } else {
            cout << "Invalid input! Please enter a valid choice (1-3)." << endl;
        }
    } while (opt != 3);

    return opt;
}



