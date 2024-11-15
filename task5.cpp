#include <iostream>
#include <string>
#include <cstring>
using namespace std;

#define MAX_LENGTH 100

int main() {
    char strA[MAX_LENGTH];
    char strB[MAX_LENGTH];
    
    //! input validate if word have spaceword
    do {
        cout << "Enter first word: ";
        cin.getline(strA, MAX_LENGTH);
        cout << "Enter second word: ";
        cin.getline(strB, MAX_LENGTH);


        //! check if the two words are anagrams

        for (int i = 0; i < strlen(strA); i++) {
            for (int j = 0; j < strlen(strA); j++) {

                if (strA[i] == strA[j]) {
                    i++;
                }
                if (strA[i] == strB[j]) {
                    i++;
                }
            }
        }

        if (strlen(strA) != strlen(strB)) {
            cout << "Thi is not an anagram" << endl;
        } else {
            cout << "this is an anagrma" << endl;
        }

    } while (strchr(strA, ' ') && strchr(strB, ' '));

    return 0;
}
