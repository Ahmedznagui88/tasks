#include <iostream>
#include <cstring>
using namespace std;

struct contacts {
    char name[21];
    char surname[21];
    char phone[11];
};

#define LEN 101

int main() {
    contacts contact[LEN];
    int count = 0;
    int choice;

    do {
        cout << "***** M E N U *****" << endl << endl;
        cout << "1 - Show Contact" << endl;
        cout << "2 - Insert contact" << endl;
        cout << "3 - Delete Contact" << endl;
        cout << "4 - Exit" << endl;

        cout << "Enter a choice : ";
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(LEN, '\n');
            cout << "Enter a choice: choose a number betwee 1 and 4" << endl;
            continue;
        }

        cin.ignore();

        switch (choice) {
        case 1:
            //!show contact
            cout << "Show Contact" << endl;
            if (count == 0) {
                cout << "No contact to show" << endl;
                break;
            } else {
                for (int i = 0; i < count; i++) {
                    cout << "Contact " << i + 1 << ":" << endl;
                    cout << "Name: " << contact[i].name << endl;
                    cout << "Surname: " << contact[i].surname << endl;
                    cout << "Phone: " << contact[i].phone << endl;
                    cout << endl;
                }
                cout << endl;
            }
            
            break;
        case 2:
            //!insert contact
            //!inpunt name

            if (count >= LEN) {
                cout << "Contact list is full" << endl;
                break;
            } else {
                cout << "Enter name : ";
                cin.getline(contact[count].name, 21);
                while (strlen(contact[count].name) == 0) {
                    cout << "Invalid input, Please enter a valid name : ";
                    cin.getline(contact[count].name, 21);
                    cin.clear();
                    cin.ignore(21, '\n');
                }

                //!input surname
                cout << "Enter surname : ";
                cin.getline(contact[count].surname, 21);
                while (strlen(contact[count].surname) == 0) {
                    cout << "Invalid input, Please enter a valid surname : ";
                    cin.getline(contact[count].surname, 21);
                    cin.clear();
                    cin.ignore(21, '\n');
                }

                //!input phone
                cout << "Enter phone : ";
                cin.getline(contact[count].phone, 11);
                while (strlen(contact[count].phone) == 0) {
                    cout << "Invalid input, Please enter a valid phone : ";
                    cin.getline(contact[count].phone, 11);
                    cin.clear();
                    cin.ignore(11, '\n');
                }

                count++;
                cout << "Contact added" << endl;

            }
            break;
        case 3:

            //!delete contact
            cout << "Delete Contact" << endl;
            if(count == 0) {
                cout << "No contact to delete" << endl;
                break;
            }else {
                cout << "Delete contact" << endl;
                cout << "Enter a name to delete : " << endl;
                
            }
            break;
        case 4:
        //!exit
        if (choice == 4) {
            cout << "Exit" << endl;
            break;
        }
            break;
        default:
            cout << "Error" << endl;
        }

       // sort contact by name
        for (int i = 0; i < count; i++) {
            for (int j = i + 1; j < count; j++) {
                if (strcmp(contact[i].name, contact[j].name) > 0) {
                    contacts temp = contact[i];
                    contact[i] = contact[j];
                    contact[j] = temp;
                }
            }
        }
        
    } while (choice != 4);

    return 0;
}
