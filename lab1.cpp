//Zachary Scholefield

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <iostream>
#include <cstring>

using std::string;
using std::cout;
using std::cin;
using std::endl;

bool checkWord(string word)                         //checkWord function
{
    bool check = 0;                                 //declare bool check is false
    for(unsigned int i = 0; i < word.length() - 1; i++)
    {                                               //for loop
        if(word[i] == word[i+1])
        {
            check = 1;
            break;
        }
    }
    return check;
}

int main()
{
    string word;                                    //declaring word variable.
    bool loop = 0;                                  //priming bool loop to false.
    while(loop == 0)                                //while loop is false.
    {
        cout << "Please enter a word: " << endl;    //print prompt. 
        cin >> word;                                //take user input and store it in word variable.
        loop = checkWord(word);                     //take the results of checkword function and store it in loop.
        
        if (loop == 0)                              //if still false repeat while loop.
        {
            cout << "Try another word; however, this time enter a word with double letters. " << endl;
            cout << "i.e. school, class, room." << endl;
        }
    }

    cout << "Awesome! " << word << " is a double-lettered word! Thank you! " << endl;
    return 0;
}
