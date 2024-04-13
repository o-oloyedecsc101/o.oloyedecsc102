#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Question {
	string text;
	string optionA;
	string optionB;
	string optionC;
	string optionD;
	char correctAnswer;
	char userAnswer;
	bool skipped;
};

void studentActions(){
	cout << "Student actions ....\n";
	
	char testChoice;
	cout << "Do you want to start a test (T) or view the past test (V):";
	cin >> testChoice;
	
	if (testChoice == 'T' || testChoice == 't') {
		cout << "Starting test..\n";
	} else if (testChoice == 'V' || testChoice == 'v'){
		cout << "Viewing test scripts..\n";
	}else{
		cout << "Invalid input\n";
	}
	
	vector<Question> questions;
	
	Question q1 = {"Who is the main character in naruto?",
                   "A. Sassuke", "B. Naruto", "C. Sakura ", "D. Kakashi",
                   'B', '\0', false};
    questions.push_back(q1);
    
    Question q2 = {"What is the name of Naruto's village'?",
                   "A. Hidden sand ", "B. Hidden leaf", "C. Hideen mist", "D. Hidden sound",
                   'B', '\0', false};
    questions.push_back(q2);
    
    Question q3 = {"Who is naruto's best friend'?",
                   "A. Sassuke", "B. Sakura", "C. kakashi", "D. Obito",
                   'A', '\0', false};
    questions.push_back(q3);
    
    Question q4 = {"What is the name of naruto's teacher'?",
                   "A. Jiraya", "B. Tsunade", "C. Orochimaru", "D. Kakashi",
                   'D', '\0', false};
    questions.push_back(q4);
    
    Question q5 = {"What tailed beast does naruto have sealed in him?",
                   "A. Shukaku", "B. Kurama", "C. Son of Goku", "D. Isobu",
                   'B', '\0', false};
    questions.push_back(q5);
    
    Question q6 = {"What is Naruto's favorites food'?",
                   "A. Ramen", "B. Sushi", "C. Curry", "D. Dango",
                   'A', '\0', false};
    questions.push_back(q6);
    
    Question q7 = {"Who is naruto's father'?",
                   "A. Jiraya", "B. Kakashi", "C. Minato", "D. Obito",
                   'C', '\0', false};
    questions.push_back(q7);
    
    Question q8 = {"What is the name of Boruto's son'?",
                   "A. Sassuke", "B. Boruto", "C. Hashirama", "D. Minato",
                   'B', '\0', false};
    questions.push_back(q8);
    
    Question q9 = {"Which eye technique did Sassuke posses first?",
                   "A. Sharingan", "B. Byakugan", "C. Rineegan", "D. Tensseigan",
                   'A', '\0', false};
    questions.push_back(q9);
    
    Question q10 = {"What is the ultimate goal of the akatuski?",
                   "A. World domination", "B. Peace keeping", "C. Collecting tailed beast", "D. Becoming hokage",
                   'c', '\0', false};
    questions.push_back(q9);
    
    Question q11 = {"What is the capital of France?",
                   "A. Berlin", "B. Abuja", "C. Paris", "D. Madrid",
                   'B', '\0', false};
    questions.push_back(q11);
 	
	for (int i =0; i < questions.size(); ++i) {
		if (!questions[i].skipped) {
			cout << "Question " << i + 1 << " : " << questions [i].text << endl;
			cout << "A. " << questions[i].optionA << endl;
			cout << "B. " << questions[i].optionB << endl;
			cout << "C. " << questions[i].optionC << endl;
			cout << "D. " << questions[i].optionD << endl;
			
			 cout << "Your answer (A/B/C/D, S to skip) : ";\
			 cin >> questions [i].userAnswer;
			 
			 if (questions[i].userAnswer == 'S' || questions[i].userAnswer == 's' ) {
			 	questions[i].skipped = true;
			 	cout << "Question skipped. \n";
			 	--i;
			 }
		}
	}
	
	cout << "\nTest Script: \n";
	int score = 0;
	for (int i = 0; i < questions.size(); ++i){
		cout << "Questions " << i + 1 << ": " << questions[i].text << endl;
		cout << "Questions: " << i + 1 << ": " << questions[i].correctAnswer << endl;
		cout << "Your Answer : " << (questions[i].skipped? "Skipped" : string(1, questions[1].userAnswer)) << endl;
		cout << "--------------\n";
		
		if (!questions[i].skipped && questions[i].correctAnswer == questions[i].userAnswer){
			++score;
		}
	}
	
	cout << "Your score is " << score << "/" << questions.size() << endl;
}

void lecturerActions(){
	cout << "lecturer actions ....\n";
	
	char uploadChoice;
	cout << "Do you want to upload questions(Q) or user details (U) :";
	cin >> uploadChoice;
	
	if (uploadChoice == 'Q' || uploadChoice == 'q'){
	
	string filename;
	cout << "Enter the name of the file and your file extension :";
	cin >> filename;
	
	ifstream questionFile(filename);
	if (questionFile){
		cout << "Question was succesfully uploaded\n";
		}else {
			cout << "Error uploading file \n";
		}
		
  } else if (uploadChoice == 'U' || uploadChoice == 'u'){
   
   
	string filename;
	cout << "Enter the name of the userfile and its file extension :";
	cin >> filename;
	
	ifstream userFile(filename);
	if(userFile){
		cout << "user details succesfully uploaded\n";
		}else {
			cout << "Error uploading file \n";
		}
     }else {
     	cout << "Invalid input\n";
	 }
}

int main (){
	int choice;
	cout << "Select a choice \n1: Register \n2: Login \nYour choice: ";
	cin >> choice;
	
	if (choice == 1) {
		string username, password;
		cout << "Username: ";
		cin >> username;
		
		cout << "Password: ";
		cin >> password;
		
		ofstream file;
		file.open(username + ".txt");
		file << username << endl << password;
		file.close();
		
		cout << "Registration complete: \n";
		
		ifstream loginFile (username + ".txt");
		if (loginFile) {
			string storedUsername, storedPassword;
			loginFile >> storedUsername >> storedPassword;
			 
			cout << "Login sucessful\n";
			
			char usertype;
			cout  << "Are you a lecturer(L) or a student(S) : ";
			cin >> usertype;
			if (usertype == 'L' || usertype == 'l'){
				lecturerActions();
			}else if(usertype == 'S' || usertype == 's'){
				studentActions();
		} else {
			cout << "Invalid user type\n";
			
		}
	  }else {
	  	cout << "Error during login\n";
	  }
	 
} else if (choice == 2) {
		string username, password, inputusername, inputpassword;
		cout << "Username: ";
		cin >> inputusername;
		
		cout << "Password: ";
		cin >> inputpassword;
		
		ifstream file(inputusername + ".txt");
		if (file) {
			file >> username >> password;
			if (username == inputusername && password == inputpassword){
				cout << "Login succesful\n";
				
			char usertype;
			cout  << "Are you a lecturer(L) or a student(S) : ";
			cin >> usertype;
			if (usertype == 'L' || usertype == 'l'){
				lecturerActions();
			}else if(usertype == 'S' || usertype == 's'){
				studentActions();
		} else {
			cout << "Invalid user type\n";
			}
		}else {
			cout << "Invlaid username or password please check again and re-login\n";
		}
		file.close();
		} else {
			cout << "User not found \n";
		}
   }
	return 0;
}


