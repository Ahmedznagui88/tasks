#include <iostream>
#include <string>
#include <cstring>
using namespace std;

#define MAX_LENGTH 100

int main() {
    char strA[MAX_LENGTH, '\0' ];
    char strB[MAX_LENGTH, '\0' ];
    
    int compare = strcmp(strA, strB);
    //! input validate if word have spaceword
    do {
        cout << "Enter first word: ";
        cin.getline(strA, MAX_LENGTH, '\0' );
        cout << "Enter second word: ";
        cin.getline(strB, MAX_LENGTH, '\0' );

    } while (strchr(strA, ' ') && strchr(strB, ' '));

    return 0;
}
