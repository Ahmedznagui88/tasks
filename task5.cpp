#include <iostream>
#include <string>
#include <cstring>

using namespace std;
#define MAX_LENGTH 100

int main() {
    char strA[MAX_LENGTH], strB[MAX_LENGTH];

    //!input words
    do {
        cout << "Enter the first word: ";
        cin.getline(strA, MAX_LENGTH, '\n');
    //!if enters $ the program stops
        if (strcmp(strA, "$") == 0) {
            cout << "Bye" << endl;
            break;
        }

        cout << "Enter the second word: ";
        cin.getline(strB, MAX_LENGTH, '\n');

    //!loop through the first word  
    //!strchr() check if words strA[i] is not in strB
        for (int i = 0; i < strlen(strA); i++) {
            if (strA[0] == strB[0]) {
                cout << " "<< endl;
                break;
            } else if (!strchr(strB, strA[i])) {
                cout << "This is not an anagrma" << endl <<endl;
                break;
            } else {
                cout << "Words are anagrams" << endl <<endl;
            }
            break;
        }
    } while (strcmp(strA, "$") != 0);

    return 0;
}