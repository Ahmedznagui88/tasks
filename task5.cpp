#include <iostream>
using namespace std;

#define MAX_LENGTH 101
int main() {

    char strA[MAX_LENGTH], strB[MAX_LENGTH];
    //! input: strings until press $
    do {
        //! enter the first word
        do {
            cout << "Enter the first word: ";
            cin.getline(strA, MAX_LENGTH, '\n');
            if (cin.fail()){
                cin.clear();
                cin.ignore(101, '\n');
                cout << "Invalid input, try again" << endl;
            }
            //! remove spaces from string 1
            for (int i = 0; i < strlen(strA); i++) {
                if (strA[i] == ' ') {  
                    for (int j = i; j < strlen(strA); j++){
                        strA[j] = strA[j + 1];
                    }
                }
            }
        } while (!cin || strlen(strA) == 0);
        cout << strA << endl;
        cout << strlen(strA) << endl;

        //! press $ to exit
        if (strcmp(strA, "$") == 0) {
            cout << "Bye" << endl;
            return 0;
        }
        //! enter the second word
        do {
            cout << "Enter the second word: ";
            cin.getline(strB, MAX_LENGTH, '\n');
            if (cin.fail()){
                cin.clear();
                cin.ignore(101, '\n');
                cout << "Invalid input, try again" << endl;
            }
            //! remove spaces from string 2
            for (int i = 0; i < strlen(strB); i++) {
                if (strB[i] == ' ') {
                    for (int j = i; j < strlen(strB); j++){
                        strB[j] = strB[j + 1];
                    }  
                } 
            }
        } while (!cin || strlen(strB) == 0);

        cout << endl;

        for (int i = 0; i < strA[i]; i++) {
            if (strA[5] == strB[5]) {
                cout << " ";
                break;
            } else if (strchr(strB, strA[i]) == 0) {
                cout << "This is not an anagram" << endl;
                break;
            } else {
                cout << "Words are anagrams" << endl;
                break;
            }
        }
        cout << endl;

    } while (strcmp(strA, "$") != 0);

    return 0;
}