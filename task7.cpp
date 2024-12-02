#include <iostream>
using namespace std;

int *p = new int[1001];

int n = 0;

void add(int &x) {
    p[n] = x;
    n++;
}

int main() {

    int x;
    do {
        cout << "Enter a number : ";
        cin >> x;
        add(x);
        if(cin.fail()) {
            cin.clear();
            cin.ignore(1001, '\n');
            cout << "Invalid input, Please enter a valid number : ";
        }
    } while (x > -1);

    for (int i = 0; i < n; i++) {
        if (x == p[i]) {
            for (int j = i; j < n - 1; j++) {
                p[j] = p[j + 1];
            }
            n--;
        }
        cout << p[i] << " ";
    }
    delete [] p;
    
    return 0;
}
