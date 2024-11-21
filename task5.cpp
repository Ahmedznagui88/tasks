#include <iostream>
using namespace std;

#define LEN 101
int main() {

    char strA[LEN], strB[LEN];
    do {
    int failed = cin.fail();
 
        do {
            cout << "Enter the first word: " <<endl;
            cin.getline(strA, LEN, '\n');
            if (failed){
                cin.clear();
                cin.ignore(101, '\n');
                cout << "Invalid input, try again" << endl;
                break;
            }
        } while (strlen(strA) > 101); 

        if (strcmp(strA, "$") == 0) {
            cout << "Bye" << endl;
            return 0;
        }

        do {
            cout << "Enter the second word: " <<endl;
            cin.getline(strB, LEN, '\n');
            if (failed){
                cin.clear();
                cin.ignore(101, '\n');
                cout << "Invalid input, try again" << endl;
            }
        } while (strlen(strB) > 101); 

        cout << endl;

            for (int i = 0; i < strA[i]; i++) {
                if (strA[i] == strB[i]) {
                    break;
                } else if (strchr(strB, strA[i]) == 0 || strlen(strA) != strlen(strB)) {
                    cout << "The two words do not have similar letters" << endl;
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