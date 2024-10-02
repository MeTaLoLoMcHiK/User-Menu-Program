#include <iostream>

using namespace std;

void showMenu() {
    cout << "Menu:" << endl;
    cout << "[1] Perform Action 1" << endl;
    cout << "[2] Perform Action 2" << endl;
    cout << "[3] Perform Action 3" << endl;
    cout << "[Q/q] Exit the program" << endl;
    cout << "[H/h] Help" << endl;
}

int main() {
    char choice;

    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case '1':
            cout << "Action 1 performed." << endl;
            break;
        case '2':
            cout << "Action 2 performed." << endl;
            break;
        case '3':
            cout << "Action 3 performed." << endl;
            break;
        case 'H':
        case 'h':
            cout << "Help: Choose an action from the menu." << endl;
            break;
        case 'Q':
        case 'q':
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 'Q' && choice != 'q');

    return 0;
}