#include <iostream>
using namespace std;

int main() {
    char a, b, c;
    cout << "Enter 3 letters: " << endl;
    cin >> a >> b >> c;

    //a
    if (a >= 97 && a < 110) {
        a += 13;
        cout << " " << a;
    } else if (a >= 110 && a <= 122) {
        a -= 13;
        cout << " " << a;
    } else {
        cout << " ? "; 
    }

    //b
    if (b >= 97 && b < 110) {
        b += 13;
        cout << " " << b;
    } else if (b >= 110 && b <= 122) {
        b -= 13;
        cout << " " << b;
    } else {
        cout << " ? ";
    }

    //c
    if (c >= 97 && c < 110) {
        c += 13;
        cout << " " << c;
    } else if (c >= 110 && c <= 122) {
        c -= 13;
        cout << " " << c;
    } else {
        cout << " ? ";
    }

    return 0;
}