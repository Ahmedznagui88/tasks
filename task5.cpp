#include <iostream>
using namespace std;

#define MAX_LENGTH 101
int main() {

    char strA[MAX_LENGTH], strB[MAX_LENGTH];
    //! input: strings until press $
    do {
        //! enter the first word
        int failed = cin.fail();
        do {
            cout << "Enter the first word: ";
            cin.getline(strA, MAX_LENGTH, '\n');
            if (failed){
                cin.clear();
                cin.ignore(101, '\n');
            }
            //! remove spaces from string 1
            for (int i = 0; i < strlen(strA); i++) {
                if (strA[i] == ' ') {  
                    for (int j = i; j < strlen(strA); j++){
                        strA[j] = strA[j + 1];
                    }
                }
            }

        } while (failed);

        //! press $ to exit
        if (strcmp(strA, "$") == 0) {
            cout << "Bye" << endl;
            return 0;
        }

        //! enter the second word
        do {
            cout << "Enter the second word: ";
            cin.getline(strB, MAX_LENGTH, '\n');
            if (failed){
                cin.clear();
                cin.ignore(101, '\n');
            }
            //! remove spaces from string 2 
            for (int i = 0; i < strlen(strB); i++) {
                if (strB[i] == ' ') {
                    for (int j = i; j < strlen(strB); j++){
                        strB[j] = strB[j + 1];
                    }  
                } 
            }
        } while (failed);
        cout << endl;

        //! compare strings
        //! check the first letters from the first and second string
        //! check if two strings are anagrams or not
        
        for (int i = 0; i < strlen(strA); i++) {
            if (strA[0] == strB[0]) {
                cout << " ";
                break;
            } else if (strchr(strB, strA[i]) == 0) {
                cout << "This is not an anagram" << endl;
            } else {
                cout << "Words are anagrams" << endl;
            }
            break;
        }

    } while (strcmp(strA, "$") != 0);
    return 0;
}