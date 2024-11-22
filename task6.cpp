#include <iostream>
using namespace std;

struct contacts {
    char name[50];
    char surname[50];
    char phone[10];
};

#define LEN 101

int main() {

    int choice;
    cout << "1 - Show Contact" << endl;
    cout << "2 - Insert contact" << endl;
    cout << "3 - Delete Contact" << endl;
    cout << "4 - Exit" << endl;

    cout << "Enter a choice : ";
    cin >>choice;

    do {

        contacts contact[LEN];
        contacts c;
        string name, surname, phone;
        int count = 0;

        switch (choice) {
        case 1:
            for (int i = 0; i < count; i++) {
                cout << "Name : " << contact[i].name << endl;
                cout << "Surname : " << contact[i].surname << endl;
                cout << "Phone : " << contact[i].phone << endl <<endl;
            }

            break;
        case 2:
        cout << "Inserisci contatto" << endl;
            cout << "Enter a name : ";
            cin.getline(c.name, 50);
            do {
                cout << "Enter a name : ";
                cin.getline(c.name, 50);
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(50, '\n');
                }
                cout << "Invalid input : " << endl;
            } while (strlen(c.name) > 50 || strlen(c.name) > 50);

                cout << "Enter a surname : ";
                cin.getline(c.surname, 50);
            do {
                cout << "Invalid input : " << endl;
                cout << "Enter a surname : ";
                cin.getline(c.surname, 50);
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(50, '\n');
                }
            } while (strlen(c.surname) > 50 || strlen(c.surname) > 50);

            int n;
            cout << "Enter a phone number: ";
            cin.getline(c.phone, 11);

            do {
                cout << "Invalid input : " << endl;
                cout << "Enter a phone number : " << endl;
                cin.getline(c.phone, 11);
                n = strlen(c.phone);

                if (!n && n > 11 || n <= 1) {
                    cout << "Invalid input : " << endl;
                    cout << "Enter a phone number : " << endl;
                    cin.getline(c.phone, 11);
                }
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(11, '\n');
                }

            } while (n > 11 || n <= 1);
            break;
        case 3:
            cout << "Cancella contatto" << endl;
            break;
        case 4:
            cout << "Esci" << endl;

            break;
        default:
            cout << "Invalid input" << endl;
            
        }

    } while (true);

    return 0;
}
