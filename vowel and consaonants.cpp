#include <iostream>
using namespace std;

int main() {
    char letter;
   
    cout << "Enter a letter: ";
    cin >> letter;

    
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    bool isVowel = false;

    
    for (int i = 0; i < 5; i++) {
        if (letter == vowels[i]) {
            isVowel = true;
            break;
        }
    }

    if (isVowel) {
        cout << letter << " is a vowel." << endl;
    } else {
        cout << letter << " is a consonant." << endl;
    }

    return 0;
}

 
