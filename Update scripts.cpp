#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main (){
	string studentName,course
	cout << "Enter name of student";
	cin << studentName;
	
	cout << "Enter the course";
	cin << course;
	
	ifstream StudentFile (studentName + ".txt");
		if (studentFile) {
			string storedstudentName, storedcourse;
			studentFile >> storedstudentName >> course;;
	cout << "STUDENT FOUND\n";
	cout << "Student: " << storedStudent << "\n";
    cout << "Course: " << storedCourse << "\n";
	} else  { "STUDENT NOT FOUND\n";
		} 
		cout << "What do you want to edit today:\n"
          << "1. Name\n"
          << "2. Test score\n"
          << "3. Exam score\n"
          << "4. Participation" <<endl;
         if (choice == 1) {
		 int newstudentName;
        cout << "Enter new student name " << storedstudentName << ": ";
        cin >> newstudentName; 
		} else if (choice == 2) {
		 int newTestscore;
        cout << "Enter Test score " << storedTestscore << ": ";
        cin >> newTestscore; 
    }else if (choice == 3) {
		 int newTestscore;
        cout << "Enter Examscore " << storedExamscore << ": ";
        cin >> newExamscore; 
    }else if (choice == 4) {
		 int newTestscore;
        cout << "Enter Participation " << storedParticipation << ": ";
        cin >> newparticipation; 
    } else { "Nothing here for you\n";
	}
		
	
	
}



