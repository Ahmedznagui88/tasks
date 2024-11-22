#include <iostream>
using namespace std;

struct contacts {
    char name[50];
    char surname[50];
    char phone[10];
};

#define LEN 101

int main() {

    contacts contact[LEN];     


        contacts c;
        string name, surname, phone;    
        int count = 0;
        do {
            cout << "Enter a name : ";
            cin.getline(c.name, 50);

            cout << "Enter a surname : ";
            cin.getline(c.surname, 50);

            if (cin.fail()) {
                cin.clear();
                cin.ignore(50, '\n');
            }

        } while (strlen(c.name) > 50 || strlen(c.surname) > 50);

        int n;
        cout << "Enter a phone number : ";
        cin.getline(c.phone, 11);

        do{
            cout << "Invalid input : " << endl;
            cout << "Enter a phone number : " << endl;
            cin.getline(c.phone, 11);
            n = strlen(c.phone);

            if (n > 11 || n <= 1) {
                cout << "Invalid input : " << endl;
                cout << "Enter a phone number : " << endl;
                cin.getline(c.phone, 11);
            }
            if (cin.fail()) {
                cin.clear();
                cin.ignore(11, '\n');
            }

         } while (n > 11 || n <= 1);

            
            


    return 0;
}
