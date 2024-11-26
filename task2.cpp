#include <iostream>
using namespace std;


int main() {
    int _num;
    bool _validInput = false;

    while (!_validInput) {
        cout << "Enter an odd number; "<< endl;
        cin  >> _num;
        if (_num >= 3 && _num % 2 != 0) {
            _validInput = true;
        } else {
            cout << "Please enter an odd number, try again!!" << endl;
        }
        cout << endl;
    }

    char _asterisk = '*';
    for (int i = 0; i <= _num - 1; i++) {
        for (int j = 0; j <= _num - 1; j++) {
            if (j == i || j == _num - 1 - i) {
                cout << _asterisk;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}