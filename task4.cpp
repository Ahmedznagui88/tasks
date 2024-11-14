#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //! input: array size
    int num;
    cout << "Enter a number > 2: ";
    cin >> num;

    while (num < 2) {
        cout << "wrong number!! " << endl;
        cout << "Please, enter a number > 2: " << endl;
        cin >> num;
    }

    //! input: binaries in arrays
    int array[num];

    for (int i = (num - 1); i >= 0; i--) {

        do {
            cout << "Now, enter a binary number: " << i + 1 << "  " << endl;
            cin >> array[i];
            (array[i] != 0 && array[i] != 1) ? cout << "wrong number!! " : cout<< "";
        } while(array[i] != 0 && array[i] != 1);

    }

    cout <<endl;

    //! convert binary to decimal
    float decimal = 0;

    for (int i = 0; i < num; i++) {
        if(array[i] == 1) {            
            decimal += pow(2, i);            
        }
    }

    //! input: choise print
    int choice;

    do {
        cout << "enter a number between 0, 1 and 2: ";
        cin >> choice;

        switch (choice) {
        case 0:
            for(int i = (num - 1); i >= 0; i--) {
                cout << array[i] << " ";
            }
            cout <<endl;
            break;
            
        case 1:
            for(int i = 0; i < num / 2; i++) {
                int n = array[i];
                array[i] = array[num - 1 - i];
                array[num - 1 - i] = n;
            }

            cout << decimal << " decimal"<< endl;
            break;

        case 2:
            //!sum binary + 1 and print result ("implementation not completed")
            int sum;
            int m;
            for(int i = (num - 1); i >= 0; i--) {
                sum = (array[i] + 1);
                
                cout << sum <<endl;
                if(array[i - 1] == 1) {
                    cout << "overflow detect: ";
                    break;
                }
            }

            for(int i = 0; i < num; i++) {
                cout << array[i] <<" ";
            }

            cout <<endl;
            cout <<"implementation not completed" << endl;
            break;

        default:
            cout << "error" << endl;
        }

    } while(choice >= 3);

    

    return 0;
}


