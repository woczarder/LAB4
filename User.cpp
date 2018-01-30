//
// Created by Operator Wiertarki on 29.01.2018.
//

#include "User.h"

void User::print_me() {
    cout << "Login: " << this->login << endl;
}

User::User(string login, string password) {
    this->login = login;
    this->password = password;
}

void User::add_order() {
    string name, value;

    cout << "Type new order name: " << endl;
    cin >> name;
    cout << "Type new order value: " << endl;
    cin >> value;
    orders.push_back( Order(name, stoi(value)) );
}

void User::print_orders() {
    for (int i = 0; i < orders.size(); i++) {
        cout << "[" << i << "]: ";
        orders[i].print_me();
    }
}

// getters and setters

void User::set_password(string password)
{
    this->password = password;
}

void User::set_login(string name)
{
    this->login = name;
}

string User::get_login() {
    return this->login;
}

string User::get_password() {
    return this->password;
}