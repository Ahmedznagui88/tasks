#include <iostream>
#include <string>
#include <cstring>
using namespace std;

#define MAX_LENGTH 100

int main() {
    char strA[MAX_LENGTH];
    char strB[MAX_LENGTH];

    int i = 0;

    //! input validate if word have spaceword
    do {
        cout << "Enter first word: ";
        cin.getline(strA, MAX_LENGTH);
        cout << "Enter second word: ";
        cin.getline(strB, MAX_LENGTH);

        //controllo se le parole sono anagrammi

        if(strA == "$" && strB == "$") {
            cout << "exit "<<endl;
            break; 
        }

        for(int i = 0; i < strlen(strA); i++) {
            for(int j = 0; j < strlen(strB); j++) {
                if(strA[i] == strB[j]) {
                    /* strB[j] = '$';
                    break; */

                    cout << "Thi is an anagram" << endl;
                } else {
                    cout << "Thi is not an anagram" << endl;
                }
            }
        }

/*             strlen(strA) != strlen(strB) ? cout << "Thi is not an anagram" << endl : cout << "this is an anagrma" << endl;
            strcmp(strA, strB) ? cout << "this is an anagrma" << endl : cout << "Thi is not an anagram" << endl; */


    } while (strA[i] == '$' && strB[i] == '$');
    return 0;
}
