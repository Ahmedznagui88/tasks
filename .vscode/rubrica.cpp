#include <iostream>
#include <cstring>
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
        cout << "***** M E N U *****" << endl << endl;
        cout << "1 - Show Contact" << endl;
        cout << "2 - Insert contact" << endl;
        cout << "3 - Delete Contact" << endl;
        cout << "4 - Exit" << endl;

        cout << "Enter a choice : ";
        cin >>choice;
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
                    cout << "Name: " << contact[i].name << endl;
                    cout << "Surname: " << contact[i].surname << endl;
                    cout << "Phone: " << contact[i].phone << endl;
                }
            }
            break;
        case 2:

            //!insert contact

            cin.ignore();

            //!inpunt name
            cout << "Enter a name : " << endl;
            do {
                cin.getline(c.name, 50);
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(50, '\n');
                    cout << "Invalid input : " << endl;
                    cout << "Enter a name : " << endl;
                }
            } while (c.name[0] == '\0');
            
            strcpy(contact[count].name, c.name); 

            //!input surname
            cout << "Enter a surname : " << endl;
            do {
                cin.getline(c.surname, 50);
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(50, '\n');
                    cout << "Invalid input : " << endl;
                    cout << "Enter a surname : " << endl;
                }
            }while (c.surname[0] == '\0');
            
            strcpy(contact[count].surname, c.surname);

            //!input phone
            cout << "Enter a phone number : " << endl;
            int n;
            
            do {
                cin.getline(c.phone, 11);
                n = strlen(c.phone);
                if (!n && n > 11 || n <= 1 || cin.fail()) {
                    cin.clear();
                    cin.ignore(11, '\n');
                    cout << "Invalid input : " << endl;
                }
            } while (n > 11 || n <= 1);
            
            strcpy(contact[count].phone, c.phone);

            //!counter contact
            if (count >= LEN) {
                cout << "Contact list is full" << endl;
            } else {
                count++;
                cout << "#### Contact added ####" << endl;
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
            /*     cin.getline(c.name, 50);
                for (int i = 0; i < count; i++) {
                    if (strcmp(contact[i].name, c.name) == 0) {
                        for (int j = i; j < count; j++) {
                            contact[j] = contact[j + 1];
                        }
                        count--;
                        break;
                    }
                } */
            
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
        //!ordinare in ordine alfabetico
        /* for (int i = 0; i < count; i++) {
            for (int j = i + 1; j < count; j++) {
                if (strcmp(contact[i].name, contact[j].name) > 0) {
                    c = contact[i];
                    contact[i] = contact[j];
                    contact[j] = c;
                }
            }
        } */

        cin.ignore();

    } while (choice != 4);

    return 0;
}
