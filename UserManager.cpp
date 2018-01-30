//
// Created by Operator Wiertarki on 29.01.2018.
//

#include <fstream>
#include "UserManager.h"


UserManager::UserManager() {
    this->current_id = -1;
    this->total_logins = 69;
    this->total_order_adds= 10;
}

void UserManager::load(string filename) {

    fstream my_file;
    my_file.open(filename, ios::in);

    size_t pos1 = 0, pos2;

    if (!my_file.is_open())
        cout << "Can't open manager file" << endl;

    string line;

    string subs[2];
    while (getline(my_file, line)) {
        //here we search for separator in every line
        //cout << line << endl;
        pos1 = 0;
        for (int i = 0; i < 2; i++) {
            pos2 = line.find("|", pos1);

            subs[i] = line.substr(pos1, (pos2-pos1));
            cout << subs[i] << endl;
            //cout << "pos1:" << pos1 << ", pos2:" << pos2 << endl;

            pos1 = pos2+1;
        }
        cout << endl;

        data_vector.push_back(User(subs[0], subs[1]));
    }

    my_file.close();
}

void UserManager::save(string filename) {
    fstream my_file;
    my_file.open(filename, ios::out);

    if (!my_file.is_open())
        cout << "Can't open manager file" << endl;

    for (int i = 0; i < data_vector.size(); i++) {
        my_file << data_vector[i].get_login() << "|" << data_vector[i].get_password() << "\n";
    }
}

void UserManager::small_print() {
    for (int i = 0; i < data_vector.size(); i++) {
        cout << "[" << i << "]: ";
        data_vector[i].print_me();
    }
}

void UserManager::print_current() {
    if (current_id >= 0)
        data_vector[this->current_id].print_me();
    else
        cout << "Admin";
}

void UserManager::print_users() {
    small_print();
}

void UserManager::edit() {
    cout << "They are printed below. Which one do you want to edit?" << endl;
    small_print();

    int choice;
    string new_login;
    cin >> choice;

    cout << "Type new login: " << endl;
    cin >> new_login;

    data_vector[choice].set_login(new_login);
}

void UserManager::add() {
    string login, password;

    cout << "Type new login: " << endl;
    cin >> login;
    cout << "Type new password: " << endl;
    cin >> password;
    data_vector.push_back(User(login, password));
}

void UserManager::del() {
    small_print();
}

void UserManager::login() {
    small_print();
    cout << "Which do you want to login into?" << endl;

    int x;
    cin >> x;
    this->current_id = x;

    this->total_logins++;
}

void UserManager::logout() {
    this->current_id = -1;
}

void UserManager::print_orders() {
    if (this->current_id != -1) {
        data_vector[current_id].print_orders();
    }
}

void UserManager::add_order() {
    if (this->current_id != -1) {
        data_vector[current_id].add_order();
        this->total_order_adds++;
    }
}

void UserManager::print_stats() {
    cout << "Total logins: " << this->total_logins << endl;
    cout << "Total order additions: " << this->total_order_adds << endl;
}