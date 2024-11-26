#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number > 0: ";
    cin >>num;
    while (num <= 0) {
        cout << "wrong number!! "<<endl;
        cout << "Please, enter a number > 0: ";
        cin >> num;  
    }
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            cout << j * i << " "; 
        }
        cout<<endl;
    }
    return 0;
}
                            