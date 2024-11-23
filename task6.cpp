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
    char name[50], surname[50], phone[10];
    int count = 0;
    int choice;

    do {

        cout << "***** M E N U *****" << endl;
        cout << "1 - Show Contact" << endl;
        cout << "2 - Insert contact" << endl;
        cout << "3 - Delete Contact" << endl;
        cout << "4 - Exit" << endl;

        cout << "Enter a choice : ";
        cin >>choice;
        
        switch (choice) {
        case 1:
            for (int i = 0; i < count; i++) {
                cout << "Name : " << contact[i].name << endl;
                cout << "Surname : " << contact[i].surname << endl;
                cout << "Phone : " << contact[i].phone << endl <<endl;
            }

            break;
        case 2:

            cout << "Enter a name : " << endl;
            cin.getline(c.name, 50);
            
            while(c.name[0] == '\0') {
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(50, '\n');
                    cout << "Invalid input : " << endl;
                    cout << "Enter a name : " << endl;
                }
            }
            
            cout << "Enter a surname : " << endl;
            cin.getline(c.surname, 50);
                
            cout << "Enter a surname : " << endl;
            cin.getline(c.surname, 50);
            while(c.surname[0] == '\0') {
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(50, '\n');
                    cout << "Invalid input : " << endl;
                    cout << "Enter a surname : " << endl;
                }
            }

            strcpy(contact[count].surname, c.surname);

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

            strcpy(contact[count].phone, c.phone);
            break;
        case 3:
            cout << "Delete Contact" << endl;
            if(count == 0) {
                cout << "No contact to delete" << endl;
                break;
            }else {
                cout << "Delete contact" << endl;
            }
            
            break;
        case 4:

        if (choice == 4) {
            cout << "Exit" << endl;
            break;
        }

            break;
        default:
            cout << "Invalid input" << endl;
            
        }
        contact[count] = c;
        count++;
        
        
    } while (choice != 4);


    return 0;
}
