#include <iostream>

#include "UserManager.h"


using namespace std;


UserManager userManager;

void menu(string choice) ;

int main() {
    userManager.load("users.txt");

    string choice;
    while (true) {
        cout << endl << endl << endl << endl << endl;

        cout << "Current user:" << endl;
        userManager.print_current();
        cout << endl;

        userManager.print_stats();

        cout << "Make a decision:" << endl;
        cout << "[1] Print users" << endl;
        cout << "[2] Edit users" << endl;
        cout << "[3] Delete users" << endl;
        cout << "[4] Add user" << endl;
        cout << "[5] save users" << endl;

        cout << "[11] Login" << endl;
        cout << "[12] Logout" << endl << endl;

        if (userManager.current_id != -1) {
            cout << "[21] Print orders" << endl;
            cout << "[22] Add order" << endl;
        }

        cout << endl;
        cin >> choice;

        menu(choice);
    }
}

void menu(string choice) {
    if (choice == "1")
        userManager.print_users();
    if (choice == "2")
        userManager.edit();
    if (choice == "3")
        userManager.del();
    if (choice == "4")
        userManager.add();
    if (choice == "5")
        userManager.save("users.txt");

    if (choice == "11")
        userManager.login();
    if (choice == "12")
        userManager.logout();

    if (choice == "21")
        userManager.print_orders();
    if (choice == "22")
        userManager.add_order();

}