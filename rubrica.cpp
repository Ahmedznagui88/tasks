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
                cin.getline(contact[count].name, 50);
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(50, '\n');
                    cout << "Invalid input : " << endl;
                    cout << "Enter a name : " << endl;
                }
            } while (contact[count].name[0] == '\0');

            //!input surname
            cout << "Enter a surname : " << endl;
            do {
                cin.getline(contact[count].surname, 50);
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(50, '\n');
                    cout << "Invalid input : " << endl;
                    cout << "Enter a surname : " << endl;
                }
            }while (contact[count].surname[0] == '\0');
            

            //!input phone
            cout << "Enter a phone number : " << endl;
            int n;
            
            do {
                cin.getline(contact[count].phone, 10);
                n = strlen(contact[count].phone);
                if (!n && n > 11 || n <= 1 || cin.fail()) {
                    cin.clear();
                    cin.ignore(11, '\n');
                    cout << "Invalid input : " << endl;
                }
            } while (n > 11 || n <= 1);

            //!counter contact
            count++;
            cout << "#### Contact added ####" << endl;

            cin.ignore();


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
                cin.getline(contact[count].name, 50);
                if(cin.fail()) {
                    cin.clear();
                    cin.ignore(50, '\n');
                    cout << "Invalid input : " << endl;
                    cout << "Enter a name to delete : " << endl;
                }
                cout << "Enter a surname to delete : " << endl;
                cin.getline(contact[count].surname, 50);
                if(cin.fail()) {
                    cin.clear();
                    cin.ignore(50, '\n');
                    cout << "Invalid input : " << endl;
                    cout << "Enter a surname to delete : " << endl;
                }

                for (int i = 0; i < count; i++) {
                    if (strlen(contact[i].name) == 0 || strlen(contact[i].surname)) {
                        for (int j = i; j < count; j++) {
                            contact[j] = contact[j + 1];
                        }
                        count--;
                        break;
                    }
                }
            }
            cout << "#### Contact deleted ####" << endl;
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
        cin.ignore();
    } while (choice != 4);

    return 0;
}
