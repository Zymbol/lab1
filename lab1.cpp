//Zachary Scholefield

#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

bool checkWord(string word) {
    bool check = 0;                                 
    for(unsigned int i = 0; i < word.length() - 1; i++) {                                               
        if(word[i] == word[i+1])
        {
            check = 1;
            break;
        }
    }
    return check;
}

bool tripleCheck(string word) {
    bool check = 0;                                
    for(unsigned int i = 0; i < word.length() - 2; i++) {
        if(word[i] == word[i+1] && word[i] == word[i+2]) {
            check = 1;
            break;
        }
    }
    return check;
}

int main(int argc, char *argv[]) {
    string word;
    bool tripleLet = 0;
    bool doubleLet = 0;                                  
    bool loop = 0;  
    ifstream uTestFile;

#ifdef UNIT_TEST 
    cout << "\nINITIALIZING TEST!!!\n\n";
    uTestFile.open("uTestFile.txt");
    while (!uTestFile.eof()){                    
        bool loop = 0;
        bool tripleLet = 0;
        getline(uTestFile, word);
        loop = checkWord(word);

        if (uTestFile.eof()) {
            break;
        }
        if (loop == 1) {
            tripleLet = tripleCheck(word);
            if (tripleLet == 1){
                cout << word << " - FALSE if just looking for double letters." << endl;
            }
            else {
                cout << word << " - TRUE" << endl;
           // return 0;
            }        
        }
        else {
            cout << word << " - FALSE" << endl;
        }
        
    }
    return 0;
#endif                               

    while (doubleLet == 0 || tripleLet == 1) {
        cout << "Please enter a word: " << endl;   
        cin >> word;                               
        loop = checkWord(word);                    
        if (loop == 1) {
            tripleLet = tripleCheck(word);
            if (tripleLet == 1){
                cout << word << " has more than double letters." << endl;
            }
            else {
                cout << word << " has double letters!" << endl;
            return 0;
            }        
        }
        else {
            cout << word << " doesn't have double letters." << endl;
            cout << "Try inputing a word with double letters." << endl;
            cout << "i.e. School, Vacuum, Skiing..." << endl;
        }               
    }
    return 0;
}
