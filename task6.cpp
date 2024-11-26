#include <iostream>
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
        cout << "*** PhoneBook ***" << endl << endl;
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
        cout << endl;
        
        switch (choice) {
        case 1:
            //!show contact
            cout << "Show Contact" << endl;
            if (count == 0) {
                cout << "NO CONTACT TO SHOW" << endl;
                cout << "Your phonebook is empty" << endl;
                cout << endl;
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
            //!inpunt
            if (count >= LEN) {
                cout << "Contact list is full" << endl;
                break;

            } else {
                
                //!input name
                do {
                    cout << "Enter name : ";
                    cin.getline(contact[count].name, 21);
                    if(cin.fail() || strlen(contact[count].name) == 0 || strlen(contact[count].name) > 20) {
                        cin.clear();
                        cin.ignore(21, '\n');
                        cout << "Invalid input, Please enter a valid name : ";
                    }
                }while(cin.fail() || strlen(contact[count].name) == 0 || strlen(contact[count].name) > 20);

                //!input surname
                do {
                    cout << "Enter surname : ";
                    cin.getline(contact[count].surname, 21);
                    if(cin.fail() || strlen(contact[count].surname) == 0 || strlen(contact[count].surname) > 20) {
                        cout << "Invalid input, Please enter a valid surname : ";
                        cin.clear();
                        cin.ignore(21, '\n');
                    }
                } while (cin.fail() || strlen(contact[count].surname) == 0 || strlen(contact[count].surname) > 20);

                //!input phone
                do {
                    cout << "Enter phone : ";
                    cin.getline(contact[count].phone, 11);
                    if(cin.fail() || strlen(contact[count].phone) == 0 || strlen(contact[count].phone) > 10) {
                        cout << "Invalid input, Please enter a valid phone : ";
                        cin.clear();
                        cin.ignore(11, '\n');
                    }
                } while (cin.fail() || strlen(contact[count].phone) == 0 || strlen(contact[count].phone) > 10);
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
                
                //!select name / surname to delete
                cout << "Enter name to delete : ";
                char name[21];
                cin.getline(name, 21);

                cout << "Enter surname to delete : ";
                char surname[21];
                cin.getline(surname, 21);
                while (strlen(name) == 0 || strlen(surname) == 0) {
                    cout << "Invalid input, Please enter a valid name and then surname : ";
                    cin.getline(name, 21);
                    cin.getline(surname, 21);
                    if(cin.fail()) {
                        cin.clear();
                        cin.ignore(21, '\n');
                    }
                }
                
                //!delete contact
                for (int i = 0; i < count; i++) {
                    if (strnlen(contact[i].name, 21) == strnlen(name, 21) && strnlen(contact[i].surname, 21) == strnlen(surname, 21)) {
                        for (int j = i; j < count - 1; j++) {
                            
                            /* contact.name[j].name = contact.name[j + 1].name;
                            contact.surname[j] = contact.surname[j + 1]; */
                            name[j] = name[j + 1];
                            surname[j] = surname[j + 1];
                        }
                        count--;
                    }
                }
                cout << "Contact deleted" << endl;
                break;
            }
            break;
        case 4:
        //!exit

        if (choice == 4) {
            cout << "See you soon, Bye!" << endl;
            break;
        }
            break;
        default:
            cout << "Error" << endl;
        }
        
    } while (choice != 4);

    return 0;
}