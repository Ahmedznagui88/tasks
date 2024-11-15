#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#define MAX_LENGTH 100

int main() {
    char strA[MAX_LENGTH], strB[MAX_LENGTH];

    do {

        cout << "Enter the first word: ";
        cin.getline(strA, MAX_LENGTH, '\n');

        if (strcmp(strA, "$") == false) {
            cout << "Bye" << endl;
            break;
        }

        cout << "Enter the second word: ";
        cin.getline(strB, MAX_LENGTH, '\n');

        /* if (strlen(strA) != strlen(strB)) {
            cout << "These words doesn't have same length" << endl;
        } */

        bool isAnagram = true;
        int lenA = strlen(strA);
        int lenB = strlen(strB);

        for (int i = 0; i < lenA; i++) {
            if (!strchr(strB, strA[i])) {
                isAnagram = false;
                cout << "This is not an anagrma" << endl <<endl;
                break;
            }
        }

        if (isAnagram) {
            cout << "Words are anagrams" << endl <<endl;
        }

    } while (strcmp(strA, "$") != false);

    return 0;
}